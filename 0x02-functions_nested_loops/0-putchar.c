#include <stdio.h>
#include "main.h"
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char myString[] = "_putchar\n";
	int i = 0;

	while (i < strlen(myString))
	{
		_putchar(myString[i]);
		i++;
	}
	return (0);
}

