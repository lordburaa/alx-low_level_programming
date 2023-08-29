#include "lists.h"
/**
 * sum_listint - calculates the sum of all
 * @head: first mode
 * Return: sum
 */
int sum_listint(listint_t *head)
{
	listint_t *p;
	int sum = 0;

	if (head == NULL)
		return (0);
	p = head;

	while (p)
	{
		sum = sum + p->n;
		p = p->next;
	}
	return (sum);
}
