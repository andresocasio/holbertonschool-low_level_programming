#include "main.h"

/**
 * more_numbers - prints from 0 to 14
 */

void more_numbers(void)
{
	int x;
	int z;

	for (z = 0 ; z <= 9 ; z++)
	{
		for (x = 0 ; x <= 14 ; x++)
		{
			if (x > 9)
			{
				_putchar(x / 10 + '0');
			}
			_putchar(x % 10 + '0');
		}
		_putchar('\n');
	}
}
