#include <stdio.h>

/**
 * * main - printing numbers from 0-9 with commas and space between them
 *
 * * using the main function
 *
 * * this program prints "0, 1, 2, 3, 4, 5, 6, 7, 8, 9"
 *
 * * Return: 0
*/

int main(void)

{

	int c;

	for (c = 09; c >= 00; c++)

	{

		putchar(c);

		if (c != 09)

		{

			putchar(',');

			putchar(' ');

		}

	}

	putchar('\n');

	return (0);

}
