#include <stdio.h>

/**
* main - main entry
* description: print even number
* Return: return 0
*/
int main(void)
{
int a = 0, b = 1, li = 0;
int sum = 0;
while (li < 4000000)
{
li = a + b;
a = b;
b = li;
if (li % 2 == 0)
sum += li;
}
printf("%i\n", sum);
return (0);
}
