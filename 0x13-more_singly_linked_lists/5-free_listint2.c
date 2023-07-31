#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_listint2 - frees a listint_t list
 * @head: pointer to the head of the list
 *
 * Return: void
 */
void free_listint2(listint_t **head)
{
listint_t *current, *next;
if (head == NULL)
return;
current = *head;
while (current != NULL)
{
next = current->next;
free(current);
current = next;
}
*head = NULL;
}
