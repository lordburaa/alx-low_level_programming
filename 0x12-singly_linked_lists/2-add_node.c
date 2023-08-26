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
	unsigned int len = 0;

	while (str[len])
		len++;
	newN = malloc(sizeof(list_t));
	if (!newN)
		return (NULL);

	newN->str = strdup(str);
	newN->len = len;
	newN->next = (*head);
	(*head) = newN;
	return (*head);
}
