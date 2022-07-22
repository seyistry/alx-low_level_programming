#include <stdlib.h>
#include "main.h"

/**
 * _strchr - find a character in a string
 * @s: string to check
 * @c: character
 * Return: pointer to char or return NULL
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s != c)
			s++;
		else
			return (s);
	}
	if (c == '\0')
		return (s);
	return (NULL);
}
