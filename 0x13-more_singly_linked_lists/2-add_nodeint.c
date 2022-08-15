#include "lists.h"

/**
 * add_nodeint - Add node to head
 * @head: pointer to pointer head
 * @n: data of node added to list
 *
 * Return: return type listint_t
 *
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	if (*head == NULL)
		return (NULL);
	listint_t *new_node = (struct listint_t) malloc(sizeof(struct listint_t));

	new_node->n = n;
	new_node->next = (*head);
	(*head)->new_node;
	return (*new_node);
}
