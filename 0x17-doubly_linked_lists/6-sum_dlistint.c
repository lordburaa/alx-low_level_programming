#include "lists.h"
/**
 * sum_dlistint - sum of the number in the node
 * @head: head
 * Return: sum of the node
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *temp = head;
	int sum = 0;

	if (!temp)
		return (0);
	while (temp->next != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
