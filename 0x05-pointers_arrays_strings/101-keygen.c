#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
int password[100];
int sum = 0;
int i = 0;
int n = 0;
srand (time(NULL));
while (sum < 2772)
{
password[i] = rand() % 127;
if (password[i] > 32)
{
sum += password[i];
i++;
}
}
}
