#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_listint_safe - frees a listint_t list
 * @h: pointer to the head of the list
 *
 * Return: the size of the list that was freed
 */
size_t free_listint_safe(listint_t **h)
{
listint_t *current, *next;
size_t count, i;
listint_t *hold[1024];
if (h == NULL || *h == NULL)
return (0);
current = *h;
count = 0;
while (current != NULL)
{
for (i = 0; i < count; i++)
{
if (hold[i] == current)
{
*h = NULL;
return (count);
}
}
hold[count] = current;
count++;
next = current->next;
free(current);
current = next;
}
*h = NULL;
return (count);
}
