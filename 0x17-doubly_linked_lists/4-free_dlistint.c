#include "lists.h"
/**
 * free_dlistint - free th enode
 * @head: head
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp = head;
	dlistint_t *fre;

	if (*head == NULL)
		return (NULL);
	while (temp != NULL)
	{
		fre = temp;
		free(fre->prev);
		free(fre->next);
		temp = temp->next;
	}
}
