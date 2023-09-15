#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list
 * @head: pointer to the head of the list
 * @index: index of the node to return
 *
 * Return: address of the nth node, or NULL if it doesn't exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
unsigned int i;
dlistint_t *current = head;
for (i = 0; i < index && current; i++)
current = current->next;
return (current);
}
