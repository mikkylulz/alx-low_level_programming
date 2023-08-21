#include "main.h"

/**
* _atoi - function that convert a string to an integer
* @s: string to convert
* Return: Return the converted string to int
*/

int _atoi(char *s)
{
int i = 1;
unsigned int j = 0;
do {
if (*s == '-')
i *= -1;
else if (*s >= '0' && *s <= '9')
j = j * 10 + (*s - '0');
else if (j > 0)
break;
} while (*s++);
return (j *i);
}
