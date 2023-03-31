#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node - Add a new node
 * @head: First arg
 * @str: Second arg
 *
 * Return: 0
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *x;
	unsigned int len;

	len = 0;

	while (str[len])
		len++;

	x = malloc(sizeof(list_t));

	if (!x)
		return (NULL);

	x->str = strdup(str);
	x->len = len;
	x->next = (*head);
	(*head) = x;

	return (*head);
}
