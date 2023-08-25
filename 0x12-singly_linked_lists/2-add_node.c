#include "lists.h"
#include <string.h>
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

	newN = mallod(sizeof(list_t));
	while (str[leg])
		leg++;
	if (!newN)
		return (NULL);
	newN->str = strdup(str);
	newN->leg = leg;
	newN->next = (*head);
	(*head) = newN;
	return (*head);
}
