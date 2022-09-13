#include "main.h"

/**
* print_last_digit - entry point
* @n: n is an integer
* description: function that prints the last digit of a number
* Return: return number
*/

int print_last_digit(int n)
{
int lastd = n % 10;
if (lastd < 0)
lastd *= -1;
_putchar (lastd + '0');
return (lastd);
}
