#include "main.h"

/**
* times_table - entrtry point
* description: print the 9 times table
* Return: void
*/

void times_table(void)
{
int num1, mum2, result;
for (num1 = 0; num1 <= 9; num1++)
{
_putchar('0');
for (num2 = 1; num2 <= 9; num2++)
{
_putchar(',');
_putchar(' ');
result = num1 * num2;
if (result <= 9)
_putchar(' ');
else
_putchar((result / 10) + '0');

_putchar((result % 10) + '0');
}
_putchar('\n');
}
}
