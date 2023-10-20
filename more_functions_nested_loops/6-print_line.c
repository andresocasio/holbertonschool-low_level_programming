#include "main.h"

/**
 * print_line - prints stright line
 * @n: variable for program
 */

void print_line(int n)
{
	int x;

	if (n > 0)
	{
		for (x = 0 ; x < n ; x++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
