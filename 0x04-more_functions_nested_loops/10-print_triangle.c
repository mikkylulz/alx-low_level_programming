#include "main.h"

/**
* print_triangle - Write a function that prints a triangle,
* followed by a new line
* @size: size of a triangle
* Return: this does not return anything
*/

void print_triangle(int size)
{

int i1, i2;

if (size > 0)
{
for (i1 = 1; i1 <= size; i1++)

{

for ((i2 = size - i1); i2 > 0; i2--)

_putchar(' ');

for (i2 = 0; i2 < i1; i2++)
_putchar('#');

if (i1 == size)
continue;
_putchar('\n');
}
}
_putchar('\n');
}
