#include "lists.h"
/**
 * delete_dnodeint_at_index -  insert new node at given positon
 * @head: head
 * @index: index
 * Return: 1 if succesful els 0
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = *head;
	unsigned int i = 0;

	if (*head == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		*head = temp->next;
		if (temp->next != NULL)
			temp->next->prev = NULL;
		free(temp);
		free_dlistint(temp->next);
		free_dlistint(temp->prev);
		return (1);
	}
	for (i = 0; temp != NULL &&  i < index - 1; i++)
	{
		temp = temp->next;
	}
	if (temp->next == NULL || temp == NULL)
	{
		free(temp);
		return (-1);
	}
	if (temp->next->next != NULL)
	{
		temp->next = temp->next->next;
		free(temp->next->prev);
		temp->next->prev  = temp;
		return (1);
	}
	else
	{
		free(temp->next);
		free_dlistint(temp);
		temp->next = NULL;
		return (1);
	}
	return (-1);
}
