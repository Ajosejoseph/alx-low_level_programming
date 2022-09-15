#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - print all natural numbers from n to 98, follow by a new line
 * @n: start print from this number
*/

void print_to_98(int n)
{
	int a, c;

	if (n <= 98)
	{
		for (a = n; a <= 98; a++)
		{
			if (a != 98)
				printf("%d, ", a);
			else if (a == 98)
				printf("%d\n", a);
		}
	} else if (n >= 98)
	{
		for (c = n; c <= 98; c++)
		{
			if (c != 98)
				printf("%d, ", c);

			else if (c == 98)
				printf("%d\n", c);
		}
	}
}
