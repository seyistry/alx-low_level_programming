#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch = 'a';

	while (ch < '{')
	{
		putchar(ch);
		ch++;
	}
	return (0);
}
