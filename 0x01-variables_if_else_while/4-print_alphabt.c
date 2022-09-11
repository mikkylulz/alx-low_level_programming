#include <stdio.h>
#include <unistd.h>

/**
* main - Entry point
*
* description: a program that prints the alphabet in lowercase,
* without q & e followed by a new line
*
* Return: Return 0
*/

int main(void)
{
int ch;
for (ch = 'a'; ch <= 'z'; ch++)
{
if (ch != 'e' && ch != 'q')
	{
putchar(ch);
}
else
{
}
}
putchar('\n');

return (0);
}
