#include "main.h"

/**
* _strncat - concatenates two strings
* @dest:char dest
* @src: char src
* @n:length int
* Return: char
*/

char *_strncat(char *dest, char *src, int n)
{
int i, len;
for (len = 0; dest[len] != '\0'; len++)
;
for (i = 0; src[i] != '\0' && i < n; i++)
dest[len + i] = src[i];
dest[len + i] = '\0';
return (dest);
}
