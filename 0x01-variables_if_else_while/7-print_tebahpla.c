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

int a;
for (a = 'z'; a >= 'a'; a--)
{
putchar(a);
}
return (0);
}
