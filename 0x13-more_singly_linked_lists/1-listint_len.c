#include "lists.h"

/**
 * listint_len - print list from a linked list
 * @h: pointer of list
 *
 *
 * Return: type of struct size_t
 */

size_t listint_len(const listint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
