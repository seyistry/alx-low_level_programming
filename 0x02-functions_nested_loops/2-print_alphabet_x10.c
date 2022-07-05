#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - print [a-z *10]
 */
void print_alphabet_x10(void)
{
	int i = 0;
	char j = 'a';

	while (i < 10)
	{
		j = 'a';
		while (j < '{')
		{
			_putchar(i);
			j++;
		}
		_putchar('\n');
		i++;
	}
}
