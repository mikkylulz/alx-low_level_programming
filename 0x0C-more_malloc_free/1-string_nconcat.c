#include "main.h"
#include <stdlib.h>

/**
* string_nconcat - Concatenates two strings using at
* most an inputted number of bytes.
* @s1: The first string.
* @s2: The second string.
* @n: The maximum number of bytes of s2 to concatenate to s1.
*
* Return: If the function fails - NULL.
* Otherwise - a pointer to the concatenated space in memory.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, x2, i, j;
	char *s;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] != '\0'; i++)
		;
	for (j = 0; s2[j] != '\0'; j++)
		;
	if (n >= j)
		n = j;
	s = malloc(sizeof(char) * (i + n + 1));
	if (s == NULL)
		return (NULL);
	for (x = 0; s1[x] != '\0'; x++)
		s[x] = s1[x];
	for (y = i; y < i + n; y++)
		s[y] = s2[y - i];
	s[y] = '\0';
	return (s);
}
