#include <stdio.h>
#include "main.h"

/**
 * _islower - check if value C is lowercase
 *@c: c is interger
 *
 *Return: 1 is c is lower or return 0 if not
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
