using System;

namespace Recursion
{
	public class Recursion
	{
		/// <summary>
		/// Factr the specified x.
		/// </summary>
		/// <param name="x">The x coordinate.</param>
		public int Factr(int x){
			if (x == 0) {
				return 1; 
			} else {
				return Factr (x - 1) * x; 
			}
		}

		public String inv(String s){
			if(s == null){
				return ("ERROR:   No se aceptan cadenas vacias!");
			}
			if (s.Length == 1) {
				return s; 
			} else {
				return (s [s.Length-1])+inv(s.Substring(0,s.Length - 1));
			}
		}

		public int RetornarFibo(int fibo)
		{
			if (fibo == 1) {
				return 1; 
			}
			if (fibo == 2) {
				return 1; 
			}
			return RetornarFibo(fibo-2)+fibo-1;
		}
	}
}

