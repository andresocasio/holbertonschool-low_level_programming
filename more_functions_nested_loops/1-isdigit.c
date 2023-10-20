#include "main.h"
#include <stdio.h>

/**
 * _isdigit - checks for digit
 * Return: 0 or 1
 * @c: variable in problem
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
