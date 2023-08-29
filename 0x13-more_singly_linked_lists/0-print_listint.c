#include "lists.h"

/**
 * print_listint - Prints all elements of a listint_t list.
 * @h: Pointer to the head of the list.
 *
 * Return: Number of nodes in the list.
 */
size_t print_listint(const listint_t *h)
{
const listint_t *cursor = h;
size_t nodes = 0;

while (cursor)
{
nodes++;
printf("%d\n", cursor->n);
cursor = cursor->next;
}

return (nodes);
}
