#include "main.h"

/**
 * _isdigit - check if value C is lowercase
 *@c: c is interger
 *
 *Return: 1 is c is lower or return 0 if not
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}
