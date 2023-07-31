#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * sum_listint - returns the sum of all the data (n) of a listint_t list
 * @head: pointer to the head of the list
 *
 * Return: the sum of all the data (n) of a listint_t list
 */
int sum_listint(listint_t *head)
{
listint_t *current;
int sum;
if (head == NULL)
return (0);
current = head;
sum = 0;
while (current != NULL)
{
sum += current->n;
current = current->next;
}
return (sum);
}
