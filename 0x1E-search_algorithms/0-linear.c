#include "search_algos.h"

/**
 * linear_search - searches for a value in an array
 * @size: is the number of elements in array
 * @array: is a pointer to the first element of the array to search
 * @value: is the value to search
 * Return: return the first index where value is located
 */
int linear_search(int *array, size_t size, int value)
{
	size_t	j;

	if (array == NULL)
		return (-1);
	j = 0;
	while (j < size)
	{
		printf("Value checked array[%lu] = [%d]\n", j, array[j]);
		if (array[j] == value)
			return (0);
		j++;
	}
	return (-1);
}

