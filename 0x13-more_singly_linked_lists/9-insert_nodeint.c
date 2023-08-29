#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node at a given position.
 * @head: Pointer to a pointer to the head of the list.
 * @idx: Index where the new node should be added.
 * @n: Data to be stored in the new node.
 *
 * Return: Address of the new node, or NULL if it failed.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n);
{
	 unsigned int i;
	 listint_t *new_node, *current;

	 if (head == NULL)
		 return (NULL);

	 new_node = malloc(sizeof(listint_t));
	 if (new_node == NULL)
		 return (NULL);

	 new_node->n = n;

	 if (idx == 0)
	{
		*head = new_node;
		new_node->next = *head;
		return (new_node);
	}

	 current = *head;
	 for (i = 0; current != NULL && i < idx - 1; i++)
		 current = current->next;

	 if (current == NULL)
	{
		free(new_node);
		return (NULL);
	}

	 new_node->next = current->next;
	 current->next = new_node;

	 return new_node;

}
