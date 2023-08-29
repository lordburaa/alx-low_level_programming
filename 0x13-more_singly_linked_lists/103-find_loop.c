#include "lists.h"
/**
 * free_listint_safe - frees a linked list
 * @h: linked first
 * Return: freedelemts
 */
size_t free_listint_safe(listint_t **h)
{
	size_t leg = 0;
	int diffnt;
	listint_t *temp;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		diffnt = *h-(*h)->next;
		if (diffnt > 0)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
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

