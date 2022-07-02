#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 48;
	int j = 48;

	while (i < 58)
	{
		j = 48;
		while (j < 58)
		{
			if (i != j)
			{
				putchar(i);
				putchar(j);
				if (i != 57 || j != 56)
				{
					putchar(',');
					putchar(' ');
				}
			}
			j++;
		}
		i++;
	}
	putchar('\n');
	return (0);
}
