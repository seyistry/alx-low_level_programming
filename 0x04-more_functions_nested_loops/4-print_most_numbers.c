#include "main.h"

/**
 * print_most_numbers - print most number
 *
 *Return: void
 */
void print_most_numbers(void)
{
	int n = 48;

	while (n < 58)
	{
		if (!(n == 2 || n == 4))
		{
			_putchar(n);
			n++;
		}
	}
	_putchar('\n');
}
