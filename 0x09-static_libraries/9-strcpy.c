#include "main.h"

/**
* _strcpy - copy the string
* @dest: destination
* @src: source
* Return: dest
*/

char *_strcpy(char *dest, char *src)
{
int i = -1;
do {
i++;
dest[i] = src[i];
} while (src[i] != '\0');
return (dest);
}
