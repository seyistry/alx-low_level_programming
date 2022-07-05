#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - print [a-z]
 */
void print_alphabet(void)
{
	char i = 'a';

	while (i < '{')
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
