#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 49;
	int j = 49;

	while (i < 58)
	{
		putchar(i);
		while (j < 58)
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
