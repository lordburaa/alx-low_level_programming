#include"lists.h"
/**
 * free_listint - frees a list
 * @head: pointer
 */

void free_listint(listint_t *head)
{
	listint_t *node = head;
	listint_t *n_node;

	while (node != NULL)
	{
		n_node = node->next;
		free(node);
		node = n_node;
	}
}
