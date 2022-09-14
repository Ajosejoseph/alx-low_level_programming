#include "main.h"

/**
 * print_alphabetx10 - print the alphabet in lowercase
 * using main function
 * Description: a function that prints ten times the alphabet, in lowercase
 * Return: void
*/
void print_alphabet_x10(void)

{
	char ch;
	int i;

	for (i = 0; i < 10; i++)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
		{
			_putchar(ch);
		}
		_putchar('\n');
	}
}

