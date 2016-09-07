using System;

namespace Recursion
{
	class MainClass
	{
		public static void Main (string[] args)
		{
			Recursion r = new Recursion (); 
			Console.Write ("Ingrese un numero para calcular su factorial> ");
			try{
				Console.WriteLine(r.Factr(Convert.ToInt32(Console.ReadLine())));	
			}catch(FormatException e){
				Console.WriteLine ("");
				Console.Write ("             ERROR: Solo se aceptan valores enteros!");
			}
			Console.ReadLine ();
		}
	}
}
