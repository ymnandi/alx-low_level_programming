#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - creates a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Return: pointer to new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *dog;
int name_len, owner_len, i;
char *name_cpy, *owner_cpy;
dog = malloc(sizeof(dog_t));
if (!dog)
return (NULL);
name_len = 0;
while (name[name_len])
name_len++;
name_cpy = malloc(sizeof(char) * (name_len + 1));
if (!name_cpy)
{
free(dog);
return (NULL);
}
for (i = 0; i <= name_len; i++)
name_cpy[i] = name[i];
owner_len = 0;
while (owner[owner_len])
owner_len++;
owner_cpy = malloc(sizeof(char) * (owner_len + 1));
if (!owner_cpy)
{
free(name_cpy);
free(dog);
return (NULL);
}
for (i = 0; i <= owner_len; i++)
owner_cpy[i] = owner[i];
dog->name = name_cpy;
dog->age = age;
dog->owner = owner_cpy;
return (dog);
}
