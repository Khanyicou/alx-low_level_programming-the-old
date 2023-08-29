#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - Deletes the head node of a listint_t linked list.
 * @head: The head of the list.
 *
 * Return: The data (n) of the deleted head node.
 */
int pop_listint(listint_t **head)
{
	 listint_t *temp;
	 int data = 0;

	 if (*head == NULL)
		 return (0);

	 temp = *head;
	 data = temp->n;
	 free(temp);

	 *head = (*head)->next;
	 return (data);
}
