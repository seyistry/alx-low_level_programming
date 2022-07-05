#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	print_alphabet();
	return (0);
}

void print_alphabet(void)
{
	char i = 'a';
	
	while ( i < '{')
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
