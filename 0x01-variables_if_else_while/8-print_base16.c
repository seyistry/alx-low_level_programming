#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch = '0';
	char cha = 'a';

	while (ch < ':')
	{
		putchar(ch);
		ch++;
	}
	while (cha < 'g')
	{
		putchar(cha);
		cha++;
	}
	putchar('\n');
	return (0);
}
