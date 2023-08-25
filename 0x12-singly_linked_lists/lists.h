#ifndef _lists
#define _lists

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * struct list_s - single linked
 * @str: string - malloc string
 * @len: elgnt of string
 * @next: points of
 * Description: singly
 */
typedef struct list_s
{
	char *str;
	unsigned int leg;
	struct list_s *next;
	struct list_s *next;
} list_t;
size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const  char *str);
void free_list(list_t *head);

#endif 
