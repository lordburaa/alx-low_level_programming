#include "lists.h"
/**
 * free_listint_safe - frees  a linst
 * @h: pointer to first node
 * Return: number of elemnts
 */
size_t free_listint_safe(listint_t **h)
{
	size_t leg = 0;
	int diff;
	listint_t *tmp;

	if (!h || !h)
		return (0);
	while (*h)
	{
		diff = *h - (*h)->next;
		if (diff > 0)
		{
			tmp = (*h)->next;
			free(*h);
			*h = tmp;
			leg++;
		}
		else
		{
			free(*h);
			*h = NULL;
			leg++;
			break;
		}
	}
		*h = NULL;
		return (leg);
}
