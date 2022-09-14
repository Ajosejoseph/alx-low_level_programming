#include "main.h"

/**
 * main - print the alphabet in lowercase
 * using main function
 * description: a fun to print alphabet
 * Return: void
*/
void print_alphabet(void);
{

	char ch;

	for (ch = 'a' ; ch <= 'z' ; ch++)

	{

		putchar(ch);

	}

	putchar('\n');

	return (0);

}

