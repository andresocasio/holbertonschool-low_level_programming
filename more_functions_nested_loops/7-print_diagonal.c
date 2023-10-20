#include "main.h"

/**
 * print_diagonal - prints diagonal line
 * @n: variable for program
 */

void print_diagonal(int n)
{
	int x, z;

	x = 0;

	while (n > 0)
	{
		z = x;
		while (z > 0)
		{
			_putchar(' ');
			z--;
		}
		_putchar('\\');
		_putchar('\n');
		x++;
		n--;
	}
	if (x < 1)
		_putchar('\n');
}
