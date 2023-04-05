#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

size_t listint_len(const listint_t *h)
{
	int total;
	listint_t *ptr = (listint_t *)h;

	total = 0;

	while (ptr->next != NULL)
	{
		total++;
		ptr = ptr->next;
	}

	return (total);
}
