using System; 
using System.Numerics;
namespace Application
{
class MyClass {
	static void Main(string[] args) {
		/*
         * Read input from stdin and provide input before running
        var line1 = System.Console.ReadLine().Trim();
        var N = Int32.Parse(line1);
        for (var i = 0; i < N; i++) {
            System.Console.WriteLine("hello world");
        }
        */
			var t, i, j, k;
			k = System.console.ReadLine ().Trim ();
			t = Int32.Parse (k);
			while (t-- > 0) {
				System.Console.WriteLine ("Hello W!\n"+t);
			}
	}
}
}