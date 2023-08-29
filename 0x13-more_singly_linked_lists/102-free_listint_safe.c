#include "lists.h"
#include <stdio.h>
#include <stdlib.h>


/**
 * free_listint_safe - Frees a listint_t linked list.
 * @h: Pointer to the head of the list.
 *
 * Return: The size of the list that was freed.
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *current = *h;
	listint_t *temp;

	size_t count = 0;

	while (current != NULL)
	{
		temp = current;
		current = current->next;
		free(temp);

		count++;

		if (temp <= current)
	{
		*h = NULL;
		break;
	}
	}

	*h = NULL;
	return (count);
}
