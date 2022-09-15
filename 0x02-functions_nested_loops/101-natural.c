#include <stdio.h>
#include "main.h"

/**
 * main - entry point
 * Return: 0
*/
int main(void)
{
	int multiply = 0;
	int sum = 0;

	while (multiply < 1024)
	{
		if (multiply % 3 == 0 || multiply % 5 == 0)
		{
			sum += multiply;
		}
		multiply++;
	}
	printf("%d\n", sum);
	return (0);
}
