#include "main.h"

/**
 * puts_half - half of a string.
 * @str: string to be printed.
 */
void puts_half(char *str)
{
	int a = 0, len = 0, c;

	while (str[a++])
		len++;

	if ((len % 2) == 0)
		c = len / 2;

	else
		c = (len + 1) / 2;

	for (a = c; a < len; a++)
		_putchar(str[a]);

	_putchar('\n');
}
