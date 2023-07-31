#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 * @head: pointer to the head of the list
 * @index: index of the node, starting at 0
 *
 * Return: the nth node of a listint_t linked list
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
listint_t *current;
unsigned int i;
if (head == NULL)
return (NULL);
current = head;
for (i = 0; i < index && current != NULL; i++)
current = current->next;
if (current == NULL)
return (NULL);
return (current);
}
