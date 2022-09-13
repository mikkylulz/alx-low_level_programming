#include "main.h"

/**
* _islower - Entry point
*
* description: A function that checks for lowercase character
*
* @c: the int value
*
* Return: void
*
*/

int _islower(int c)

{
int i = 'a';
for (i = 'a'; i <= 'z'; i++)
{
if (c == i)
{
return (1);
}
}
return (0);
}
