#include "main.h"

/**
* _strlen - returns the length of a string.
*@s: string:
* Return: Return length
*/

int _strlen(char *s)
{

int i;
i = 0;
while (s[i])
i++;
return (i);
}
