//! Talk to `firmware/scripts/radtel_cps.py`. The UI does not open the radio.

use std::io::Write;
use std::path::PathBuf;
use std::process::{Command, Stdio};

pub struct Shell {
    script: PathBuf,
}

pub struct ShellResult {
    pub code: i32,
    pub stdout: String,
    pub stderr: String,
}

impl Shell {
    pub fn locate() -> Result<Self, String> {
        let mut starts = Vec::new();
        if let Ok(cwd) = std::env::current_dir() {
            starts.push(cwd);
        }
        if let Ok(exe) = std::env::current_exe() {
            if let Some(dir) = exe.parent() {
                starts.push(dir.to_path_buf());
            }
        }
        for start in starts {
            let mut dir = start;
            for _ in 0..8 {
                let candidate = dir.join("firmware/scripts/radtel_cps.py");
                if candidate.is_file() {
                    return Ok(Self { script: candidate });
                }
                if !dir.pop() {
                    break;
                }
            }
        }
        Err("cannot find firmware/scripts/radtel_cps.py (run from the radtel-950-pro tree)".into())
    }

    pub fn run(&self, lines: &[String]) -> Result<ShellResult, String> {
        let mut child = Command::new("python3")
            .arg(&self.script)
            .stdin(Stdio::piped())
            .stdout(Stdio::piped())
            .stderr(Stdio::piped())
            .spawn()
            .map_err(|e| format!("failed to start cps shell: {e}"))?;
        {
            let mut stdin = child.stdin.take().ok_or("cps shell stdin missing")?;
            for line in lines {
                writeln!(stdin, "{line}").map_err(|e| format!("write to cps shell: {e}"))?;
            }
            writeln!(stdin, "quit").ok();
        }
        let output = child
            .wait_with_output()
            .map_err(|e| format!("cps shell wait: {e}"))?;
        Ok(ShellResult {
            code: output.status.code().unwrap_or(1),
            stdout: String::from_utf8_lossy(&output.stdout).into_owned(),
            stderr: String::from_utf8_lossy(&output.stderr).into_owned(),
        })
    }
}
