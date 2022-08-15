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
	listint_t *new_node = (listint_t *) malloc(sizeof(listint_t));

	new_node->n = n;
	new_node->next = (*head);
	(*head) = new_node;
	if (!new_node)
		return (NULL);
	return (new_node);
}
