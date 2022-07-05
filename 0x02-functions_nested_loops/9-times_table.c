#include "main.h"

/**
 * times_table - times table o - 9
 *
 *
 *Return: return the last digits
 */
void times_table(void)
{
	int i = 0;
	int j = 0;
	int n;

	while (i < 10)
	{
		j = 0;
		while (j < 10)
		{
			n = i * j;
			if (n > 9)
			{
				int m = n / 10;
				int l = n % 10;

				_putchar(m + 48);
				_putchar(l + 48);
			}
			else
			{
				_putchar(n + 48);
			}
			if (j < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			j++;
		}
		_putchar('\n');
		i++;
	}
}
