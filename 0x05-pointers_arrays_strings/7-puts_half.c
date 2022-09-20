#include "main.h"

/**
* puts_half - prints the second half of the string
* @str: the string
* Return: Return 0;
*/

void puts_half(char *str)
{
int i = _strlen(str);
if (i % 2 == 0)
i = i / 2;
else
i = (i + 1) / 2;
while (str[i] != '\0')
{
_putchar(str[i]);
i++;
}
_putchar('\n');
}

/**
* _strlen - return string length
* @s: the string
* Return: given string length
*/

int _strlen(char *s)
{
int count, i;
i = 0;
for (count = 0; s[count] != '\0'; count++)
i++;
return (i);
}
