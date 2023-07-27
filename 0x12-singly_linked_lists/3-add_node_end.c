#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: pointer to the list_t list to add the node at the end
 * @str: string to initialize the new node with
 *
 * Return: if the function fails - NULL
 * otherwise - the address of the new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
list_t *new, *h;
unsigned int len = 0;
new = malloc(sizeof(list_t));
if (!new)
return (NULL);
new->str = strdup(str);
while (str[len])
len++;
new->len = len;
new->next = NULL;
if (!*head)
{
*head = new;
return (*head);
}
h = *head;
while (h->next)
h = h->next;
h->next = new;
return (*head);
}
