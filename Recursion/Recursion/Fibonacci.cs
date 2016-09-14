using System;

namespace Recursion
{
	public class Fibonacci
	{
		public Fibonacci ()
		{
		}

		public int RetornarFibo(int fibo)
		{
			if (fibo == 1) {
				return 0; 
			}
			if (fibo == 2) {
				return 1; 
			}
			return (RetornarFibo(fibo-2)+RetornarFibo(fibo-1));
		}
	}
}

