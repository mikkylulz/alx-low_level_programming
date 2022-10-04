#include "main.h"
#include <stdio.h>

/**
* str_concat - a function that concatenates two strings.
*
* @s1: input to string 1
*
* @s2: input to string 2
*
* Return: NULL on faliure
*/

char *str_concat(char *s1, char *s2)
{
char *concat_str;
int i, concat_index = 0, j = 0;
if (s1 == NULL)
s1 = "";
for (i = 0; s1[i] || s2[i]; i++)
j++;
concat_str = malloc(sizeof(char) * j);
if (concat_str == NULL)
return (NULL);
for (i = 0; s1[i]; i++)
concat_str[concat_index++] = s1[i];
for (i = 0; s2[i]; i++)
concat_str[concat_index++] = s2[i];
return (concat_str);
}