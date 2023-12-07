#include "lists.h"
/**
 * get_dnodeint_at_index - get noe at the point
 * @head: head
 * @index: index
 * Return: address of teh node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *get = head;
	dlistint_t *temp = head;
	unsigned int i = 0;
	unsigned int k = 0;

	if (head == NULL)
		return (NULL);
	while (temp)
	{
		k++;
		temp = temp->next;
	}
	if (index > k)
		return (NULL);
	while (i < index)
	{
		get = get->next;
		i++;

	}
	return (get);
}
