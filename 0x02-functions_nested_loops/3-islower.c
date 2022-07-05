#include <stdio.h>
#include "main.h"

/**
 * _islower - check if value C is lowercase
 */
int _islower(int c)
{
	if (c >= 79 && c <= 122)
	{
		return (1);
	}
	return (0);
}
