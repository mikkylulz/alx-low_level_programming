#include "main.h"
#include <stdli.h>

/**
* *_strdup - a function that duplicates a string
*
* @str: input string to duplicate
*
* Return: NULL if str == NULL
*
*/

char *_strdup(char *str)
{
char *duplicate;
int i, j = 0;
if (str == NULL)
return (NULL);
for (i = 0; str[i]; i++)
j++;
duplicate = malloc(sizeof(char) * (j + 1));
if (duplicate == NULL)
return (NULL);
for (i = 0; str[i]; i++)
duplicate[i] = str[i];
duplicate[k] = '\0';
return (duplicate);
}
