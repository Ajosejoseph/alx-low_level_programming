#include <stdio.h>
#include "main.h"

/**
 * main - entry point
 * Return: 0
*/

int main(void)
{
	int a = 1;
	int b = 2;
	int fib = 0;
	int sum = 2;

	while  (fib < 4000000)
	{
		fib = a + b;
		if (fib % 2 == 0)
		{
			sum += fib;
		}
		a = b;
		b = fib;
	}
	printf("%i\n", sum);
	return (0);
}
