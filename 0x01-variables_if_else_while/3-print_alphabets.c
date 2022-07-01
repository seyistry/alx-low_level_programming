#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch = 'a';
	char cha = 'A';

	while (ch < '{')
	{
		putchar(ch);
		ch++;
	}
	while (cha < '[')
	{
		putchar(cha);
		cha++;
	}
	putchar('\n');
	return (0);
}
