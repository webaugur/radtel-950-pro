//! Run `mono RadtelDat.exe` for export, import, read, and write.
//!
//! The argument order matches `run_dat_helper` in `radtel_cps.py`. Mono opens
//! the serial port itself for read and write. Export and import do not.

use std::ffi::OsString;
use std::path::{Path, PathBuf};
use std::process::{Command, Stdio};
use std::sync::mpsc;
use std::thread;
use std::time::Duration;

pub const FILE_TIMEOUT: Duration = Duration::from_secs(60);
pub const RADIO_TIMEOUT: Duration = Duration::from_secs(180);
pub const BAUD: u32 = 115_200;

#[derive(Clone, Debug, PartialEq, Eq)]
pub enum DatOp {
    Export {
        dat: PathBuf,
    },
    Import {
        template: PathBuf,
        json: PathBuf,
        outfile: PathBuf,
    },
    Read {
        port: String,
        outfile: PathBuf,
        template: Option<PathBuf>,
    },
    Write {
        port: String,
        dat: PathBuf,
    },
}

impl DatOp {
    pub fn timeout(&self) -> Duration {
        match self {
            DatOp::Export { .. } | DatOp::Import { .. } => FILE_TIMEOUT,
            DatOp::Read { .. } | DatOp::Write { .. } => RADIO_TIMEOUT,
        }
    }
}

/// Full argv, including `mono`. A test locks this list to `RadtelDat.exe`.
pub fn mono_argv(helper: &Path, cps_exe: &Path, op: &DatOp) -> Vec<OsString> {
    let mut args = vec![OsString::from("mono"), helper.as_os_str().to_os_string()];
    match op {
        DatOp::Export { dat } => {
            args.push(OsString::from("export"));
            args.push(cps_exe.as_os_str().to_os_string());
            args.push(dat.as_os_str().to_os_string());
        }
        DatOp::Import {
            template,
            json,
            outfile,
        } => {
            args.push(OsString::from("import"));
            args.push(cps_exe.as_os_str().to_os_string());
            args.push(template.as_os_str().to_os_string());
            args.push(json.as_os_str().to_os_string());
            args.push(outfile.as_os_str().to_os_string());
        }
        DatOp::Read {
            port,
            outfile,
            template,
        } => {
            args.push(OsString::from("read"));
            args.push(cps_exe.as_os_str().to_os_string());
            args.push(OsString::from(port));
            args.push(OsString::from(BAUD.to_string()));
            args.push(outfile.as_os_str().to_os_string());
            if let Some(template) = template {
                args.push(template.as_os_str().to_os_string());
            }
        }
        DatOp::Write { port, dat } => {
            args.push(OsString::from("write"));
            args.push(cps_exe.as_os_str().to_os_string());
            args.push(OsString::from(port));
            args.push(OsString::from(BAUD.to_string()));
            args.push(dat.as_os_str().to_os_string());
        }
    }
    args
}

pub struct DatResult {
    pub code: i32,
    pub stdout: String,
    pub stderr: String,
}

/// `Err` is a status line (`error: ...`) for a spawn failure or the job deadline.
/// A non-zero Mono exit is `Ok` with `code != 0` so the caller can log stderr.
pub fn run(helper: &Path, cps_exe: &Path, op: &DatOp) -> Result<DatResult, String> {
    let argv = mono_argv(helper, cps_exe, op);
    let mut cmd = Command::new(&argv[0]);
    cmd.args(&argv[1..])
        .stdin(Stdio::null())
        .stdout(Stdio::piped())
        .stderr(Stdio::piped());
    let output = wait_for(cmd, op.timeout())?;
    Ok(DatResult {
        code: output.status.code().unwrap_or(1),
        stdout: String::from_utf8_lossy(&output.stdout).into_owned(),
        stderr: String::from_utf8_lossy(&output.stderr).into_owned(),
    })
}

pub fn failure_status(stderr: &str, stdout: &str, code: i32) -> String {
    let blob = if stderr.trim().is_empty() {
        stdout
    } else {
        stderr
    };
    let detail = blob
        .trim()
        .lines()
        .last()
        .map(str::trim)
        .filter(|line| !line.is_empty())
        .map(|line| line.strip_prefix("error:").unwrap_or(line).trim())
        .unwrap_or("");
    if detail.is_empty() {
        format!("error: exit {code}")
    } else {
        format!("error: {detail}")
    }
}

/// Wait until Mono exits, or until `timeout`.
///
/// The bound is the same 60 s / 180 s deadline the Python helper used. A hung
/// `RadtelDat.exe` has no other completion signal. On the deadline, SIGKILL
/// is what makes `wait` return.
fn wait_for(mut cmd: Command, timeout: Duration) -> Result<std::process::Output, String> {
    let child = cmd
        .spawn()
        .map_err(|e| format!("error: failed to run mono: {e}"))?;
    let id = child.id();
    let (tx, rx) = mpsc::channel();
    thread::spawn(move || {
        let _ = tx.send(child.wait_with_output());
    });
    match rx.recv_timeout(timeout) {
        Ok(Ok(output)) => Ok(output),
        Ok(Err(e)) => Err(format!("error: mono wait: {e}")),
        Err(mpsc::RecvTimeoutError::Timeout) => {
            let _ = Command::new("kill")
                .args(["-KILL", &id.to_string()])
                .status();
            // SIGKILL makes the waiter finish. This second bound only covers
            // a kill that did not reap the child (pid already gone).
            let _ = rx.recv_timeout(Duration::from_secs(2));
            Err(format!(
                "error: dat helper timed out after {}s",
                timeout.as_secs()
            ))
        }
        Err(mpsc::RecvTimeoutError::Disconnected) => Err("error: mono waiter exited".into()),
    }
}

#[cfg(test)]
mod tests {
    use super::*;

    fn line(op: &DatOp) -> Vec<String> {
        mono_argv(
            Path::new("/opt/firmware/scripts/RadtelDat.exe"),
            Path::new("/opt/cps/BT-RT950PRO_CPS.exe"),
            op,
        )
        .into_iter()
        .map(|arg| arg.to_string_lossy().into_owned())
        .collect()
    }

    #[test]
    fn mono_argv_matches_radteldat_for_export_import_read_write() {
        let helper = "/opt/firmware/scripts/RadtelDat.exe";
        let cps = "/opt/cps/BT-RT950PRO_CPS.exe";
        assert_eq!(
            line(&DatOp::Export {
                dat: PathBuf::from("/tmp/a.dat"),
            }),
            vec!["mono", helper, "export", cps, "/tmp/a.dat",]
        );
        assert_eq!(
            line(&DatOp::Import {
                template: PathBuf::from("/tmp/template.dat"),
                json: PathBuf::from("/tmp/edit.json"),
                outfile: PathBuf::from("/tmp/out.dat"),
            }),
            vec![
                "mono",
                helper,
                "import",
                cps,
                "/tmp/template.dat",
                "/tmp/edit.json",
                "/tmp/out.dat",
            ]
        );
        assert_eq!(
            line(&DatOp::Read {
                port: "/dev/ttyUSB0".into(),
                outfile: PathBuf::from("/tmp/from-radio.dat"),
                template: None,
            }),
            vec![
                "mono",
                helper,
                "read",
                cps,
                "/dev/ttyUSB0",
                "115200",
                "/tmp/from-radio.dat",
            ]
        );
        assert_eq!(
            line(&DatOp::Write {
                port: "/dev/ttyUSB0".into(),
                dat: PathBuf::from("/tmp/to-radio.dat"),
            }),
            vec![
                "mono",
                helper,
                "write",
                cps,
                "/dev/ttyUSB0",
                "115200",
                "/tmp/to-radio.dat",
            ]
        );
        assert_eq!(FILE_TIMEOUT, Duration::from_secs(60));
        assert_eq!(RADIO_TIMEOUT, Duration::from_secs(180));
        assert_eq!(
            DatOp::Export {
                dat: PathBuf::new()
            }
            .timeout(),
            FILE_TIMEOUT
        );
        assert_eq!(
            DatOp::Read {
                port: String::new(),
                outfile: PathBuf::new(),
                template: None,
            }
            .timeout(),
            RADIO_TIMEOUT
        );
    }

    #[test]
    fn failure_status_uses_the_last_error_line() {
        let status = failure_status(
            "progress\nerror: Read timed out (TOOVER). The radio did not answer.\n",
            "",
            1,
        );
        assert_eq!(
            status,
            "error: Read timed out (TOOVER). The radio did not answer."
        );
    }
}
