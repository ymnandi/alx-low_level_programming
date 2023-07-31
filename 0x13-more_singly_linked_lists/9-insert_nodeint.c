#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * insert_nodeint_at_index - inserts a new node in a linked list,
 * at a given position
 * @head: pointer to the first node in the list
 * @idx: index where the new node is added
 * @n: data to insert in the new node
 *
 * Return: pointer to the new node, or NULL
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *new_node, *current;
unsigned int i;
if (head == NULL)
return (NULL);
if (idx != 0)
{
current = *head;
for (i = 0; i < idx - 1 && current != NULL; i++)
current = current->next;
if (current == NULL)
return (NULL);
}
new_node = malloc(sizeof(listint_t));
if (new_node == NULL)
return (NULL);
new_node->n = n;
if (idx == 0)
{
new_node->next = *head;
*head = new_node;
}
else
{
new_node->next = current->next;
current->next = new_node;
}
return (new_node);
}
