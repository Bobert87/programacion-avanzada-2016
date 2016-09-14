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
			Console.WriteLine ("");
			Console.WriteLine ("          EJERCICIO 2: SERIE FIBONACCI");
			Console.WriteLine ("");
			Console.Write ("Ingrese el numero para calcular el fibonacci> ");
			try{
				Console.WriteLine(r.RetornarFibo(Convert.ToInt32(Console.ReadLine())));	
			}catch(FormatException e){
				Console.WriteLine ("");
				Console.Write ("             ERROR: Solo se aceptan valores enteros!");
			}
			Console.WriteLine ("");
			Console.WriteLine ("          EJERCICIO 3: INVERTIR UNA CADENA");
			Console.WriteLine ("");
			Console.Write ("Ingrese una cadena de texto> ");
			Console.WriteLine("CADENA INVERTIDA: "+r.inv (Console.ReadLine()));
			Console.WriteLine ("");

			Console.ReadLine ();
		}
	}
}
