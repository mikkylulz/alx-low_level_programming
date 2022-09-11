#include <stdio.h>

/**
* main - Main entry
*
* description: A program that prints all possible different
* combinations of three digits.
*
* Return: Return 0
*/

int main(void)
{

int i, m, n;
for (i = '0'; i <= '9'; i++)
{
for (m = '0'; m <= '9'; m++)
{
for (n = '0'; n <= '9'; n++)
{
if (i < m && i < n)
{
putchar(i);
putchar(m);
putchar(n);

if (i != '7')
{
putchar(',');
putchar(' ');
}
}
}
}
}
putchar('\n');
return (0);
}




