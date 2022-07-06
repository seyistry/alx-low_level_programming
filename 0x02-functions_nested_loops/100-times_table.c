#include "main.h"

/**
 * print_times_table - times table o - 9
 *@n: int n
 *
 *Return: return the last digits
 */
void print_times_table(int n)
{
	int i = 0;
	int j = 0;
	int k;

	while (i < n + 1)
	{
		j = 0;
		if (n > 15)
		{
			break;
		}
		while (j < n + 1)
		{
			k = i * j;
			if (k > 99)
			{
				int m = (k / 100);
				int l = (k % 100) / 10;
				int p = (k % 100) % 10;

				_putchar(m + 48);
				_putchar(l + 48);
				_putchar(p + 48);
			}
			else if (k > 9)
			{
				int m = k / 10;
				int l = k % 10;

				_putchar(' ');
				_putchar(m + 48);
				_putchar(l + 48);
			}
			else if (j == 0)
			{
				_putchar('0');
			}
			else
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(k + 48);
			}
			if (j < n)
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
