#include "main.h"

/**
* rev_string - Write a function that reverses a string.
* @s: string to reverse
* Return: Return 0
*/

void rev_string(char *s)
{
int i, j;
char a[500];
i = 0;
j = 0;
	while (*(s + i))
	{
		*(a + i) = *(s + i);
		i++;
	}
	i = i - 1;
	while (i >= 0)
	{
		*(s + i) = *(a + j);
		j++;
		i--;
	}
}
