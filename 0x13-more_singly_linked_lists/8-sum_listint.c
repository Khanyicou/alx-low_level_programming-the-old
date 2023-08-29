#include "lists.h"

/**
 * sum_listint - Returns the sum of all the data.
 * @head: The head of the list.
 *
 * Return: Sum of all data
 */
int sum_listint(listint_t *head)
{
	listint_t *current = head;
	int sum = 0;

	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}
