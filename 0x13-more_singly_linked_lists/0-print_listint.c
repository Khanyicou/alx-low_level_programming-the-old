#include "lists.h"

/**
 * Listint_len - counts the num of nodes
 * @h: head
 * Return: num of elements
 */
size_t print_listint(const listint_t *h);
{
	const listint_t *cursor = h;
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (nodes);
