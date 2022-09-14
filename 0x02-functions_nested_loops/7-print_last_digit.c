#include "main.h"

/**
 * print_last_digit - print the last digit of a number
 * @n: int to print last digit
 * Return: value of last digit
*/
int print_last_digit(int n)
{
	int a;
	a = -(n % 10);

	_putchar(a + '0');
	return (0);
}
