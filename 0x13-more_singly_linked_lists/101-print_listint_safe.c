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
	size_t node, idx = 0;

	node = looped_listint_len(head);

	if (node == 0)
	{
		for (; head != NULL; node++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}
	else
	{
		for (idx = 0; idx < node; idx++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
		printf("-> [%p] %d\n", (void *)head, head->n);
	}
	return (node);
}
