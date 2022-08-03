#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: input integer array
 * @size: of the array
 * @cmp: pointer to the function
 * Return: index of the first element return 0
 * If no element matches, return -1
 * If size <= 0, return -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int a;

	if (array && cmp)
	{
		if (size <= 0)
			return (-1);
		for (a = 0; a < size; a++)
			if (cmp(array[a]))
				return (a);
	}
	return (-1);
}
