#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_lists - Print all the elements of a list_t list.
 * @h: The list_t list.
 *  Return: The num of nodes in h.
 */
size_t print_list(const list_t *h)
{
	size_t = 0;

	while (h != NULL)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		s++;
	}

	return count;
}
