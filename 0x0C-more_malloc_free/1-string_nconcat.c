#include "main.h"
#include <stdio.h>

/**
* string_nconcat - concatenates two strings.
* @s1 : string pointer
* @s2 : string pointer
* @n : int
* Return: pointer to string
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;
	unsigned int l = n, index;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (index = 0; s1[index]; index++)
		l++;

	concat = malloc(sizeof(char) * (l + 1));

	if (concat == NULL)
		return (NULL);

	l = 0;

	for (index = 0; s1[index]; index++)
		concat[l++] = s1[index];

	for (index = 0; s2[index] && index < n; index++)
		concat[l++] = s2[index];

	concat[l] = '\0';

	return (concat);
}

