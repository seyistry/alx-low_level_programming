#include "list.h"

/**
 * print_listint - print list from a linked list
 * @h: pointer of list
 *
 *
 * Return: type of struct size_t
 */

size_t print_listint(const listint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		printf("%d", h->data);
		h = h->next;
		count++;
	}
	printf("-> %d elements", count);
}
