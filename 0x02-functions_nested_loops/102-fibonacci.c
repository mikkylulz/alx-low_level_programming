#include "main.h"

/**
* main - main entry
* description: A program that prints the first 50 Fibonacci
* numbers, starting with 1 and 2, followed by a new line
* Return: Return 0
*/
int main(void)
{
int i;
int j;
for (i = 0; i < 1024; i++)
{
if ((i % 3 == 0) || (i % 5 == 0))
j += i;
}
_putchar("%d\n", j);
return (0);
}
