#include <stdio.h>

/**
* main - entry point
* description: print the sum
* Return: Return 0
*/

int main(void)
{
int i, n = 0;
while (i < 1024)
{
if ((i % 3 == 0) || (i % 5 == 0))
{
n += i;
}
i++;
}
printf("%d\n", n);
return (0);
}
