#include <stdio.h>
#include <unistd.h>

/**
* main - Entry point here
*
* description: Write a program that prints the alphabet
*
* Return: Return 0 for success
*/

int main(void)
{
int ch;
for (ch = 'a'; ch <= 'z'; ch++)
{
	putchar(ch);
}
for (ch = 'A'; ch <= 'Z'; ch++)
{
	putchar(ch);
}
putchar('\n');
return (0);
}
