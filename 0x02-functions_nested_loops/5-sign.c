#include "main.h"

/**
* print_sign - main entry
* @n: character to be verified
* description: Write a function that prints the sign of a number.
* Return: Return the value
*/

int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if
(n < 0)
{
_putchar('-');
return (-1);
}
_putchar('0');
return (0);
}
