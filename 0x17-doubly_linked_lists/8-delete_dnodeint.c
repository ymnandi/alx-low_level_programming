#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index of a dlistint_t list
 * @head: pointer to the head of the list
 * @index: index of the node to delete
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
unsigned int i;
dlistint_t *current = *head;
if (!head || !*head)
return (-1);
if (index == 0)
{
*head = current->next;
if (current->next)
current->next->prev = NULL;
free(current);
return (1);
}
for (i = 0; i < index && current; i++)
current = current->next;
if (!current)
return (-1);
if (!current->next)
{
current->prev->next = NULL;
free(current);
return (1);
}
current->prev->next = current->next;
current->next->prev = current->prev;
free(current);
return (1);
}
