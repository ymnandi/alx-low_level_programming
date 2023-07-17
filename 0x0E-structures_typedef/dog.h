#ifndef DOG_H
#define DOG_H
/**
 * struct dog - dog's information
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 * Description: dog's information
 */
struct dog
{
char *name;
float age;
char *owner;
};
/**
 * dog_t - Typedef for struct dog
 */
typedef struct dog dog_t;
/* Prototypes */
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);
#endif
