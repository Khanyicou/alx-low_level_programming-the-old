#include <stdio.h>
#include "lists.h"

/**
 * listint_len - number of nodes
 * @h: head
 *
 * Return: num of elements
 */
size_t listint_len(const listint_t *h);
{
	size_t const = 0;

	while (h)
	{
		const++;
		h = h->next;
	}
	return (const);
}

