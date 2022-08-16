#include "lists.h"

/**
 * pop_listint - pop first item on a linked list
 * @head: head is a double pointer
 *
 * Return: void
 */
int pop_listint(listint_t **head)
{
	int data;
	listint_t *temp;
	listint_t *curr;

	if (*head == NULL)
		return (0);

	curr = *head;

	data = curr->n;

	temp = curr->next;

	free(curr);

	*head = temp;

	return (data);
}
