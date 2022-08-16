#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a list
 * @head: head of list
 * @n: element
 *
 * Return: address of the new element, or NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	/* 1. allocate node */
	listint_t *new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	listint_t *last = *head; /* used in step 5*/

	/* 2. put in the data  */
	new_node->n = n;

	new_node->next = NULL;

	/* 4. If the Linked List is empty, then make the new node as head */
	if (*head == NULL)
	{
		*head = new_node;
		return (NULL);
	}

	/* 5. Else traverse till the last node */
	while (last->next != NULL)
		last = last->next;

	/* 6. Change the next of last node */
	last->next = new_node;
	return (new_node);
}
