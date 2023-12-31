#include <stdlib.h>
#include "lists.h"
/**
 * free_list - fres a list
 * @head: a list that enters to the function
 */
void free_list(list_t *head)
{
	list_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head->str);
		free(head);
		head = tmp;
	}
}
