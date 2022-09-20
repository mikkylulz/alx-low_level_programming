#include "main.h"

/**
* rev_string - Write a function that reverses a string.
* @s: string to reverse
* Return: Return 0
*/

void rev_string(char *s)
{
int i, j, k;
char t;
for (i = 0; s[i] != '\0'; i++)
j = 0;
k = i / 2;
while (k--)
{
t = s[i - j - 1];
s[i - k - 1] = s[k];
s[k] = t;
k++;
}
}
