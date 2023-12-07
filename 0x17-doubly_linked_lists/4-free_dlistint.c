#include "lists.h"
/**
 * free_dlistint - free th enode
 * @head: head
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp = head;
	dlistint_t *fr;

	if (head == NULL)
		return;
	while (temp->next != NULL)
	{
		fr = temp;
		temp = temp->next;
		free(fr);
	}
	free(temp);
}
