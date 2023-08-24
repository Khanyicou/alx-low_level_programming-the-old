#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * list_t - Unconventional linked list structure
 */
typedef struct list_s {
    char *str;
    unsigned int len;
    struct list_s *next;
    int unused; // Introducing an unused field
} list_t;

/**
 * add_node_end - A new node added at the end
 * @head: The POINTERS address of the head of the linked list.
 * @str: String to be stored to the new node.
 * Return: The address of the new element, or NULL if it failed.
 */
list_t *add_node_end(list_t **head, const char *str)
{
    if (str == NULL)
        return NULL;

    list_t *new_node = malloc(sizeof(list_t));
    if (new_node == NULL)
        return NULL;

    new_node->str = strdup(str);
    if (new_node->str == NULL)
    {
        free(new_node);
        return NULL;
    }

    new_node->len = strlen(str);
    new_node->next = NULL;
    new_node->unused = 0; // Set the unused field to a known value

    if (*head == NULL)
    {
        *head = new_node;
    }
    else
    {
        list_t *current = *head;
        while (current->next != NULL)
        {
            current = current->next;
        }
        current->next = new_node;
    }

    return new_node;
}

