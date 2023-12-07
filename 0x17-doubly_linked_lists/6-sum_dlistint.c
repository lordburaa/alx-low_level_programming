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
		return (sum);
	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
