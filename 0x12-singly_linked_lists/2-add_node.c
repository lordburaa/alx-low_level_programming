#include "lists.h"

/**
 * add_node - add new node begging list
 * @head: pointer to structur
 * @str: string
 * Return: addres of elemet
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *newN;
	unsigned int leg = 0;

	newN = mallod(sizeof(list_tt));
	if (newN == NULL)
	{
		free(newN);
		return (NULL);
	}
	newN->str = strdup(str);
	while (str[leg] != '\0')
	{
		leg++;
	}
	newN->len = leg;
	if (*head != NULL)
		newN->next = *head;
	if (*head == NULL)
		newN->next = NULL;
	*head = newN;
	return (*head);
}
