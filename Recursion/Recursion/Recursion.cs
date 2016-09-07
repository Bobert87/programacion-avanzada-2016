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
	}
}

