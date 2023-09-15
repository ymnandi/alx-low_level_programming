#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list
 * @head: pointer to the head of the list
 * @n: integer to store in the new node
 *
 * Return: address of the new node, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *new, *current;
if (!head)
return (NULL);
new = malloc(sizeof(dlistint_t));
if (!new)
return (NULL);
new->n = n;
new->next = NULL;
if (!*head)
{
new->prev = NULL;
*head = new;
return (new);
}
current = *head;
while (current->next)
current = current->next;
current->next = new;
new->prev = current;
return (new);
}
