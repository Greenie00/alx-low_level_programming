#include <stdio.h>
#include "list.h"

/**
 * print_list - Prints list
 *
 * @h: pointerof list_t
 *
 * Return: 0
 */

size_t print_list(const list_t *h)
{
	size_t x;
	x = 0;

	while(h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else 
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		x++;
	}

	return (x);
}
