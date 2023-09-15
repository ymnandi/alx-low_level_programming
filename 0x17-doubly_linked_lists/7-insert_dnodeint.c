#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: pointer to the head of the list
 * @idx: index of the list where the new node should be added
 * @n: data to be added to the new node
 *
 * Return: address of the new node, or NULL if it failed
 * if it is not possible to add the new node at index idx, do not add the new
 * node and return NULL
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
unsigned int i;
dlistint_t *current, *new;
if (!h)
return (NULL);
if (idx == 0)
return (add_dnodeint(h, n));
current = *h;
for (i = 0; i < idx - 1 && current; i++)
current = current->next;
if (!current)
return (NULL);
if (!current->next)
return (add_dnodeint_end(h, n));
new = malloc(sizeof(dlistint_t));
if (!new)
return (NULL);
new->n = n;
new->prev = current;
new->next = current->next;
current->next->prev = new;
current->next = new;
return (new);
}
