#include <stdio.h>
#include "main.h"

/**
 * _isalpha - check if value C is lowercase
 *@c: c is interger
 *
 *Return: 1 is c is lower or return 0 if not
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	return (0);
}
