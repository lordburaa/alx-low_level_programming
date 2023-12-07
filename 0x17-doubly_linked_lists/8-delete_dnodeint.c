#include "lists.h"

int delete_dnodeint_at_index(dlistint_t **head, unsigned int idx)
{
	dlistint_t *temp = *head;
	unsigned int i = 0;
	unsigned int l = 1;

	
	if ((temp->next->next == NULL && idx == 0))
	{
		
		free_dlistint(temp->next);
		free_dlistint(temp->prev);
		free_dlistint(temp);
		return (0);
	}
	if (idx == 0)
		(*head) = temp->next;
	while (temp)
	{
		if (i+l < (idx))
		{
			i++;
			temp = temp->next;
		}
		else
			break;
	}
	temp->next = temp->next->next;
	return (1);	
}
