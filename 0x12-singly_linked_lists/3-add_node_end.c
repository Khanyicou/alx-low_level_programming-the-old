#include <stdlib.h>
#include "lists.h"

/**
 * add_node_end - A new node added at the end
 * @head: Pointer to a pointer to the head node of the list.
 * @str: The string to be stored to the new node.
 * Return: The address of the new element, or NULL if it failed.
 */
list_t *add_node_end(list_t **head, const char *str)
{
list_t *new_node = malloc(sizeof(list_t));
list_t *temp = *head;

if (new_node == NULL)
return (NULL);

new_node->str = strdup(str);
if (new_node->str == NULL)
{
free(new_node);
return (NULL);
}

new_node->len = 0;
while (str[new_node->len] != '\0')
new_node->len++;

new_node->next = NULL;

if (*head == NULL)
{
*head = new_node;
return (new_node);
}

while (temp->next != NULL)
temp = temp->next;

temp->next = new_node;

return (new_node);
}
