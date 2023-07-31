#include "lists.h"
#include <stdio.h>

/**
 * delete_nodeint_at_index - deletes the node at index of a linked list
 * @head: pointer to the head of the list
 * @index: index of the node to delete
 *
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *current, *temp;
unsigned int i;
if (head == NULL || *head == NULL)
return (-1);
current = *head;
if (index == 0)
{
*head = current->next;
free(current);
return (1);
}
for (i = 0; i < index - 1 && current != NULL; i++)
current = current->next;
if (current == NULL || current->next == NULL)
return (-1);
temp = current->next;
current->next = temp->next;
free(temp);
return (1);
}
