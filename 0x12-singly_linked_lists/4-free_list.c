#include <stdlib.h>
#include "lists.h"

/**
 * free_list - Free
 * @head: First arg
 */

void free_list(list_t *head)
{
	list_t *x;

	while (head)
	{
		x = head->next;
		free(head->str);
		free(head);
		head = x;
	}
}
