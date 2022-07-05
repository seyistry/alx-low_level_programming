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

	for (int i = 0; i < strlen(myString); i++)
	{
		_putchar(myString[i]);
	}
	return (0);
}

