#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * main - generate a key depending on a username for crackme5
 * @argc: number of arguments passed
 * @argv: arguments passed to main
 *
 * Return: 0 on success, 1 on error
 */
int main(int argc, char *argv[])
{
char *username;
size_t len;
int i, j, add, keylen;
long sum;
char *key;
if (argc != 2)
{
printf("Usage: %s username\n", argv[0]);
return (1);
}
username = argv[1];
len = strlen(username);
sum = 0;
for (i = 0; i < (int)len; i++)
sum += username[i];
keylen = (int)(sum ^ 0x3b) & 0x3f;
add = (int)sum / keylen;
key = malloc(keylen + 1);
if (!key)
return (1);
for (i = 0; i < keylen; i++)
key[i] = add;
key[keylen] = '\0';
j = 0;
for (i = 0; i < (int)len; i++)
{
key[j] = key[j] ^ username[i];
j++;
if (j >= keylen)
j = 0;
}
printf("%s", key);
free(key);
return (0);
}
