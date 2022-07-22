#include "main.h"

/**
 * upperband - print greater than 98
 *@n: number to start from
 *Return: void
 */
void upperband(int n)
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
}

/**
 * lowerband - print lesser than 98
 *@n: number to start from
 *Return: void
 */
void lowerband(int n)
{
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
		else if (n > -100)
		{
			_putchar('-');
			_putchar((n / 10) * -1 + 48);
			_putchar((n % 10) * -1 + 48);
		}
		else
		{
			_putchar('-');
			_putchar(-1 * (n / 100) + 48);
			_putchar(-1 * (n % 100) / 10 + 48);
			_putchar(-1 * (n % 100) % 10 + 48);
		}
		_putchar(',');
		_putchar(' ');
		n++;
	}
}

/**
 * print_to_98 - print any number to 98
 *@n: number to start from
 *Return: return result
 */
void print_to_98(int n)
{
	upperband(n);
	lowerband(n);
	_putchar((98 / 10) + 48);
	_putchar((98 % 10) + 48);
	_putchar('\n');
}
