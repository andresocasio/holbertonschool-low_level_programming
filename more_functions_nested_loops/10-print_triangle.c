#include "main.h"

/**
 * print_triangle - print a triangle
 * @size: size of triangle
 */

void print_triangle(int size)
{
	int x, z, y;

	x = 0;
	z = size - 1;
	while (x < size)
	{
		z = size - 1 - x;
		y = x + 1;
		while (z > 0)
		{
			_putchar(' ');
			z--;
		}
		while (y > 0)
		{
			_putchar('#');
			y--;
		}
		_putchar('\n');
		x++;
	}

	if (size <= 0)
		_putchar('\n');
}
