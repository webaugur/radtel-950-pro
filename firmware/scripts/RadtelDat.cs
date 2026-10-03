// Load/save OEM RT-950PRO CPS .dat files and push/pull them over serial.
// Uses the CPS assembly's own BinaryFormatter types and RWDataOperation
// so the on-air encoding matches OEM CPS.
//
//   mono RadtelDat.exe info  <cps.exe> <file.dat>
//   mono RadtelDat.exe read  <cps.exe> <port> <baud> <outfile.dat>
//   mono RadtelDat.exe write <cps.exe> <port> <baud> <file.dat>
//
// stdout: one "ok ..." line on success
// stderr: "error: ..." and a non-zero exit on failure

using System;
using System.IO;
using System.IO.Ports;
using System.Reflection;
using System.Text;

class RadtelDat {
    static Assembly cps;
    static string cpsPath;

    static int Main(string[] args) {
        try {
            if (args.Length < 1) {
                Usage();
                return 2;
            }
            string cmd = args[0].ToLowerInvariant();
            if (cmd == "info") {
                if (args.Length != 3) { Usage(); return 2; }
                LoadCps(args[1]);
                object data = LoadDat(args[2]);
                Info(data, args[2]);
                return 0;
            }
            if (cmd == "read") {
                if (args.Length != 5 && args.Length != 6) { Usage(); return 2; }
                LoadCps(args[1]);
                // Optional template .dat gives RadioData its arrays. A blank
                // RadioData is enough when the CPS read path allocates them.
                object data = args.Length == 6 ? LoadDat(args[5]) : null;
                data = Transfer(args[2], int.Parse(args[3]), data, false);
                SaveDat(data, args[4]);
                Console.WriteLine("ok read-dat " + args[4]);
                return 0;
            }
            if (cmd == "write") {
                if (args.Length != 5) { Usage(); return 2; }
                LoadCps(args[1]);
                object data = LoadDat(args[4]);
                Transfer(args[2], int.Parse(args[3]), data, true);
                Console.WriteLine("ok write-dat " + args[4]);
                return 0;
            }
            Error("unknown command: " + cmd);
            Usage();
            return 2;
        } catch (TargetInvocationException ex) {
            Error(Innermost(ex));
            return 1;
        } catch (Exception ex) {
            Error(Innermost(ex));
            return 1;
        }
    }

    static void Usage() {
        Console.Error.WriteLine("usage:");
        Console.Error.WriteLine("  RadtelDat.exe info  <cps.exe> <file.dat>");
        Console.Error.WriteLine("  RadtelDat.exe read  <cps.exe> <port> <baud> <outfile.dat> [template.dat]");
        Console.Error.WriteLine("  RadtelDat.exe write <cps.exe> <port> <baud> <file.dat>");
    }

    static string Innermost(Exception ex) {
        while (ex.InnerException != null) ex = ex.InnerException;
        return ex.GetType().Name + ": " + ex.Message;
    }

    static void Error(string msg) {
        Console.Error.WriteLine("error: " + msg);
    }

    static void LoadCps(string path) {
        cpsPath = Path.GetFullPath(path);
        if (!File.Exists(cpsPath)) throw new FileNotFoundException("CPS exe not found", cpsPath);
        AppDomain.CurrentDomain.AssemblyResolve += delegate(object s, ResolveEventArgs ev) {
            string name = new AssemblyName(ev.Name).Name;
            if (name == "BT-RT950PRO_CPS") return Assembly.LoadFrom(cpsPath);
            return null;
        };
        cps = Assembly.LoadFrom(cpsPath);
    }

    static object LoadDat(string path) {
        Type rd = cps.GetType("KDH.RadioData", true);
        MethodInfo load = rd.GetMethod("CreatObjFromFile", BindingFlags.Public | BindingFlags.Static);
        using (FileStream fs = File.OpenRead(path)) {
            object data = load.Invoke(null, new object[] { fs });
            if (data == null) throw new InvalidDataException("CreatObjFromFile returned null");
            return data;
        }
    }

    static void SaveDat(object data, string path) {
        MethodInfo save = data.GetType().GetMethod("SaveToFile");
        string dir = Path.GetDirectoryName(Path.GetFullPath(path));
        if (!string.IsNullOrEmpty(dir) && !Directory.Exists(dir)) Directory.CreateDirectory(dir);
        using (FileStream fs = File.Create(path)) {
            save.Invoke(data, new object[] { fs });
        }
    }

    static object Field(object obj, string name) {
        FieldInfo f = obj.GetType().GetField(name, BindingFlags.Instance | BindingFlags.Public | BindingFlags.NonPublic);
        if (f == null) return null;
        return f.GetValue(obj);
    }

    static void Info(object data, string path) {
        object chData = Field(data, "channelData");
        Array list = Field(chData, "channelList") as Array;
        Array zones = Field(chData, "arrayZoneName") as Array;
        int n = list == null ? 0 : list.Length;
        int z = zones == null ? 0 : zones.Length;
        string first = "";
        string freq = "";
        if (n > 0) {
            object ch = list.GetValue(0);
            object name = Field(ch, "chName");
            object rx = Field(ch, "rxFreq");
            first = name == null ? "" : name.ToString();
            freq = rx == null ? "" : rx.ToString();
        }
        string zone0 = (z > 0 && zones.GetValue(0) != null) ? zones.GetValue(0).ToString() : "";
        Console.WriteLine("ok dat " + path);
        Console.WriteLine("channels " + n);
        Console.WriteLine("zones " + z);
        Console.WriteLine("ch0 " + freq + " " + first);
        Console.WriteLine("zone0 " + zone0);
    }

    static object Transfer(string portName, int baud, object data, bool write) {
        Type opType = cps.GetType("KDH.OPERATION_TYPE", true);
        object op = Enum.ToObject(opType, write ? 1 : 0);
        Type rwType = cps.GetType("KDH.RWDataOperation", true);
        // Read still needs a RadioData instance for the constructor.
        if (data == null) {
            data = Activator.CreateInstance(cps.GetType("KDH.RadioData", true));
        }
        using (SerialPort sp = new SerialPort(portName, baud, Parity.None, 8, StopBits.One)) {
            sp.ReadTimeout = 4000;
            sp.WriteTimeout = 4000;
            sp.DtrEnable = true;
            sp.RtsEnable = true;
            try {
                sp.Open();
            } catch (Exception ex) {
                throw new InvalidOperationException("open " + portName + " failed: " + ex.Message, ex);
            }
            object rw = Activator.CreateInstance(rwType, new object[] { sp, data, op });
            const BindingFlags flags =
                BindingFlags.Instance | BindingFlags.Public | BindingFlags.NonPublic;
            // DoIt() runs handshake + the read or write selected by OPERATION_TYPE.
            // Calling ReadRadioData/WriteRadioData alone returns TOOVER.
            MethodInfo mi = rwType.GetMethod("DoIt", flags);
            if (mi == null) throw new MissingMethodException(rwType.FullName, "DoIt");
            object result = mi.Invoke(rw, new object[0]);
            int code = Convert.ToInt32(result);
            // OPERATION_RESULT: AUTHOK=0 COMMOK=1 are success; others are failures.
            if (code != 0 && code != 1) {
                throw new InvalidOperationException(
                    (write ? "write" : "read") + " result " + result + " (" + code + ")"
                );
            }
            Console.Error.WriteLine("cps DoIt " + (write ? "WRITE" : "READ") + " " + result);
            return data;
        }
    }
}
