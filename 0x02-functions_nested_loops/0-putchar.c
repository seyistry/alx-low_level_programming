#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char myString[] = "_putchar";
	int i = 0;
	int end = strlen(myString);

	while (i < end)
	{
		printf("%s", myString);
		i++
	}
	return (0);
}
