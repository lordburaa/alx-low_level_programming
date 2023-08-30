#include "lists.h"
/**
 * find_listint_loop - finds the loop
 * @head: linked list to search
 * Return: address of node where
 */
listint_t *find_listint(listint_t *head)
{
	listint_t *slw = head;
	listint_t *fast = head;

	if (!head)
	{
		return (NULL);
	}

	while (slw && fast && fast->next)
	{
		fast = fast->next->next;
		slw = slw->next;
		if (fast == slw)
		{
			slw = head;
			while (slw != fast)
			{
				slw = slw->next;
				fast = fast->next;
			}
			return (fast);
		}
	}
	return (NULL);
}
