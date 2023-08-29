#include "lists.h"
/**
 * free_listint2 - free a list
 * @head: pointerr to first node
 */
void  free_listint2(listint_t **head)
{
	listint_t *node;
	listint_t *n_node;

	if (head == NULL)
		return;

	node = *head;

	while (node != NULL)
	{
		n_node = node->next;
		free(node);
		node = n_node;
	}
	*head = NULL;
}
