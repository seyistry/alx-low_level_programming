#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char i = '0';

	while (i < ':')
	{
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
