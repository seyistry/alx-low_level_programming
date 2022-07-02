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
	int k = 48;
	int l = 48;

	while (i < 58)
	{
		j = 48;
		while (j < 58)
		{
			k = i;
			while (k < 58)
			{
				l = 49;
				while (l < 58)
				{
					if (j != i ||  k != i || l != i)
					{
						putchar(i);
						putchar(j);
						putchar(' ');
						putchar(k);
						putchar(l);
					}
					if (i != 57 || j != 56 || l != 57 || k != 57)
					{
						putchar(',');
						putchar(' ');
					}
					l++;
				}
				k++;
			}
			j++;
		}
		i++;
	}
	putchar('\n');
	return (0);
}
