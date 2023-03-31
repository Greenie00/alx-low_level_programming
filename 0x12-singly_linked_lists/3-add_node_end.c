#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - Adds a new node
 * @head: First arg
 * @str: Second arg
 *
 * Return: address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *x;
	list_t *temp = *head;
	unsigned int len = 0;

	while (str[len])
		len++;

	x = malloc(sizeof(list_t));
	if (!x)
		return (NULL);
	x->str = strdup(str);
	x->len = len;
	x->next = NULL;

	if (*head == NULL)
	{
		*head = x;
		return (x);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = new;
	return (x);
}
