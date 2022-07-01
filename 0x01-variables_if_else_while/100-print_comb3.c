#include <stdio.h>
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
		putchar(i);
			while (j < 58)
			{
				if (i != j)
				{
					putchar(j);
					putchar(',');
					putchar(' ');	
				}
				j++;
			}
		i++;
	}
	putchar('\n');
	return (0);
}
