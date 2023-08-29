#include "lists.h"
/**
 * insert_nodeint_at_index - node at given possition
 * @head: first node
 * @idx: list new node add
 * @n: data added
 * Return: pointer
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *ptr, *c;
	unsigned int i;
	
	if (head == NULL)
	{
		return (NULL);


}
