using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.IO.Ports;

namespace csharpcommunicate {
    class Program {
        static void Main(string[] args) {
            SerialPort port;
            port = new SerialPort("COM4", 9600);
            port.Open();
            int i = 0;
            while (true) {
                port.WriteLine("text" + i++);
                string data = port.ReadLine();
                Console.WriteLine(data);
            }
        }
    }
}
