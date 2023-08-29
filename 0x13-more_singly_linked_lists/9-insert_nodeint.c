#include "lists.h"
/**
 * insert_nodeint_at_index - insert new node
 * @head: fitst node
 * @idx: new node added
 * @n: data to be added
 * Return: pointer
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{ 
	listint_t *ptr, *c;
	unsigned int i;

	if (head == NULL)
		return (NULL);

	c->n=n;
	ptr = *head;

	if (idx == 0)
	{
		c->next = ptr;
		*head = c;
		return (c);
	}
	for (i = 0; i < idx - 1; i++)
	{
		if (ptr == NULL)
			return (NULL);
		c->next = ptr->next;
		ptr->next = c;
		return (c);
	}
