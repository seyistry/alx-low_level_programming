#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: char type of destination to copy the memory
 * @n: unsigned int of number of bytes
 * @src: char type of src
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
