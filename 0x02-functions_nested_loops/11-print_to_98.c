#include "main.h"

/**
 * print_to_98 - print any number to 98
 *@n: number to start from
 *Return: return result
 */
void print_to_98(int n)
{
	while (n > 98)
	{
		if (n >= 100)
		{
			_putchar(n / 100 + 48);
			_putchar((n % 100) / 10 + 48);
			_putchar((n % 100) % 10 + 48);
		}
		else
		{
			_putchar((n % 100) / 10 + 48);
			_putchar((n % 100) % 10 + 48);
		}
		_putchar(',');
		_putchar(' ');
		n--;
	}

	while (n < 98)
	{
		if (n > 9)
		{
			_putchar((n / 10) + 48);
			_putchar((n % 10) + 48);
		}
		else if (n >= 0)
		{
			_putchar(n + 48);
		}
		else if (n > -10)
		{
			_putchar('-');
			_putchar(n * -1 + 48);
		}
		else
		{
			_putchar('-');
			_putchar((n / 10) * -1 + 48);
			_putchar((n % 10) * -1 + 48);
		}
		_putchar(',');
		_putchar(' ');
		n++;
	}
	_putchar((n / 10) + 48);
	_putchar((n % 10) + 48);
}
