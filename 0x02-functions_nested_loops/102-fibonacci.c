#include <stdio.h>

/**
* main - main entry
* description: A program that prints the first 50 Fibonacci
* numbers, starting with 1 and 2, followed by a new line
* Return: Return 0
*/
int main(void)
{
int i;
unsigned long n = 0, m = 1, o;
for (i = 0; i < 50; i++)

{
o = n + m;
printf("%lu", o);

n = m;

m = o;

if (i == 49)

printf("\n");
else
printf(", ");
}
return (0);
}
