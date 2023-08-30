#include "lists.h"
#include <stdio.h>

size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);
/**
 * looped_listint_len - unique nodes
 * @head: ppointer to the head
 * Return: if list not looped
 */
size_t looped_listint_len(const listint_t *head)
{
	const listint_t *tort, *hr;
	size_t node = 1;

	if (head == NULL || head->next == NULL)
		return (0);
	tort = head->next;
	hr = (head->next)->next;

	while (hr)
	{
		if (tort == hr)
		{
			tort = head;
			while (tort != hr)
			{
				node++;
				tort = tort->next;
				hr = hr->next;
			}
			tort = tort->next;
			while (tort != hr)
			{
				node++;
				tort = tort->next;
			}
			return (node);
		}
		tort = tort->next;
		hr = (hr->next)->next;
	}
	return (0);
}
/**
 * print_listint_safe - printd list safely
 * @head: head to listint_r lisr
 * Return: node in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nodes, index = 0;

	nodes = looped_listint_len(head);

	if (nodes == 0)
	{
		for (; head != NULL; nodes++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}
	else
	{
		for (index = 0; index < nodes; index++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
		printf("->[%p] %d\n", (void *)head, head->n);
	}
	return (nodes);
}
