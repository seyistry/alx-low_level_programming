#include <stdio.h>
#include "main.h"

/**
 * print_sign - check if value C is lowercase
 *@n: n is interger
 *
 *Return: 1 or 0 or -1
 */
int print_sign(int n)
{
	if (n > 0)
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
	return (0);
}
