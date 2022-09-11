#include <stdio.h>

/**
* main - Main entry
*
* description: A program that prints all the numbers
* of base 16 in lowercase, followed by a new line
*
* Return: Return 0
*/

int main(void)
{
char i;
char e = '0';
while (e <= '9')
{
putchar(e);
e++;
}
for (i = 'a'; i <= 'f'; i++)
{
putchar(i);
}
putchar('\n');
return (0);
}
