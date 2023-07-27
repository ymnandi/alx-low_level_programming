#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: pointer to the list_t list to add the node at the beginning
 * @str: string to initialize the new node with
 *
 * Return: if the function fails - NULL
 * otherwise - the address of the new element
 */
list_t *add_node(list_t **head, const char *str)
{
list_t *new;
unsigned int len = 0;
new = malloc(sizeof(list_t));
if (!new)
return (NULL);
new->str = strdup(str);
while (str[len])
len++;
new->len = len;
new->next = *head;
*head = new;
return (*head);
}
