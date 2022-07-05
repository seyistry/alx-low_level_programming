#include <stdio.h>
#include "main.h"

/**
 * _islower - check if value C is lowercase
 *@c: c is interger
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
