#include "main.h"

/**
 * _isupper - check if value C is lowercase
 *@c: c is interger
 *
 *Return: 1 is c is lower or return 0 if not
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
