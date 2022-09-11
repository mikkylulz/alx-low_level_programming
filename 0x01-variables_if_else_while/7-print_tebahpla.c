#include <stdio.h>

/**
* main - Main entry
*
* description: A program that prints the lowercase
* alphabet in reverse, followed by a new line.
*
* Return: return 0;
*/

int main(void)
{

int i = 122;
while (i > 96)
{
putchar(i);
--i;
}
putchar(10);
return (0);
}
