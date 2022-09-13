#include "main.h"

/**
* _islower - Entry point
*
* description: A function that checks for lowercase character
*
* Return: void
*
*/

int _islower(int c)

{
int i;
for (i = 'a'; i <= 'z'; i++)
{
if (c == i)
{
return (0);
}
}
return (0);
}
