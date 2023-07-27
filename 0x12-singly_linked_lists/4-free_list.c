#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * free_list - frees a list_t list
 * @head: pointer to the list_t list to free
 *
 * Return: void
 */
void free_list(list_t *head)
{
list_t *h;
while (head)
{
h = head->next;
free(head->str);
free(head);
head = h;
}
}
