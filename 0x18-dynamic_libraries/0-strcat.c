#include "main.h"

/**
* _strcat - concat 2 string
* @dest:char
* @src:char
* Return: char
*/

char *_strcat(char *dest, char *src)
{
int i, len;
for (len = 0; dest[len] != '\0'; len++)
;
for (i = 0; src[i] != '\0'; i++)
dest[len + i] = src[i];
dest[len + i] = '\0';
return (dest);
}
