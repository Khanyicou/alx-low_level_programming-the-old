#include "lists.h"

/**
 * listint_len - The number of nodes in a listint_t list.
 * @h: The head of the list.
 *
 * Return: Number of elements (nodes) in the list.
 */
size_t listint_len(const listint_t *h)
{
size_t count = 0;

while (h)
{
count++;
h = h->next;
}

return (count);
}
