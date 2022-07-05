#include <stdio.h>
#include "main.h"

/**
 * jack_bauer - print count to 99:99
 *
 *
 *Return: return the last digits
 */
void jack_bauer(void)
{
	int i = 0;
	int j = 0;

	while (i < 24)
	{
		j = 0;
		while (j < 100)
		{
			_putchar((i / 10) + 48);
			_putchar((i % 10) + 48);
			_putchar(58);
			_putchar((j / 10) + 48);
			_putchar((j % 10) + 48);
			_putchar('\n');
			j++;
		}
		i++;
	}
}
