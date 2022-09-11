#include <stdio.h>
#include <unistd.h>

/**
* main - Main entry
*
* description: A program that prints the alphabet in lowercase,
* followed by a new line
*
* Return: Return 0
*/

int main(void)

{

int ch;
for (ch = 'a'; ch <= 'z'; ch++)
putchar(ch);

return (0);
}
