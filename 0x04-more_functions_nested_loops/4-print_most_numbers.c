#include "main.h"

/**
* print_most_numbers -  A function who print the numbers, from
* 0 to 9 except 2 and 4
* description:  Does not receive any parameters
* Return: does not return anything
*/

void print_most_numbers(void)
{
int i = 48;
for (i = 48; i < 58; i++)
{
if ((i == 50 || i == 52))
{
continue;
}
_putchar(i);
}
_putchar(10);
}
