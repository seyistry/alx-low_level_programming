#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char i = '0';
	char j = '0';

	while (i < ':')
	{
		putchar(i);
		while (j < ':')
		{
			putchar(j);
			putchar(',');
			j++;
		}	
		i++;
	}
	putchar('\n');
	return (0);
}
