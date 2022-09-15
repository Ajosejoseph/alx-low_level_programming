#include "main.h"

/**
 * print_times_table - print n times table, starting from zero
 * @n: int
*/

void print_times_table(int n)
{
	int a, b, c;

	if (n >= 0 && n <= 15)
	{
		while (a <= n)
		{
			int b = 1;

			_putchar('0');
			while (b <= n)
			{
				int c = a * b;

				_putchar(',');
				_putchar(' ');
				if (c < 10)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(c + '0');
				} 
				else if (c > 99)
				{
					_putchar((c / 100) + '0');
					_putchar(((c / 10) % 10) + '0');
					_putchar((c % 10) + '0');
				}
				else
				{
					_putchar(' ');
					_putchar((c / 10) + '0');
					_putchar((c % 10) + '0');
				}
				b++;
			}
			_putchar('\n');
			a++;
		}
	}
}
