#include "main.h"

/**
 * jack_bauer - print count to 99:99
 *@n: n is interger
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
		while (j < 24)
		{
			putchar((i / 10) + 48);
			putchar((i % 10) + 48);
			putchar(58);
			putchar((j / 10) + 48);
			putchar((j % 10) + 48);
			putchar('\n');
			j++;
		}
		i++;
	}
}
