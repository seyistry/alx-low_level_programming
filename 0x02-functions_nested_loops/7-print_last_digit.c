#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - cprints last digit of a number
 *@n: n is interger
 *
 *Return: return the last digits
 */
int print_last_digit(int n)
{
	if (n < 0)
	{
		n = -1 * n;
		return (n % 10);
	}
	else
	{
		return (n % 10);
	}
}
