#include "main.h"

/**
* _isalpha - Entry point
*
* @c: the int value
*
* description: A function that checks for alphabetic character
*
* Return: Return 1 if true, otherwise 0
*
*/

int _isalpha(int c)
{
if (c >= 'a' && c <= 'z')
{
return (1);
}
else if (c >= 'A' && c <= 'Z')
{
return (1);
}
else
{
return (0);
}
}
