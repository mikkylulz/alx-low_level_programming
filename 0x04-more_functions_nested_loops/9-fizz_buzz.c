#include <stdio.h>

/**
* main - Entry point
* description: Write a program that prints
* the numbers from 1 to 100
* Return: 0 if the program run with successefully
*/

int main(void)
{
int i;
while (i++ < 100)

if ((i % 3 == 0) && (i % 5 == 0))
printf("FizzBuzz ");

else if ((i % 3) == 0)
printf("Fizz ");

else if ((i % 5) == 0)
{
if (i != 100)
printf("Buzz ");

else

printf("Buzz");

}
else
printf("%d ", i);
printf("\n");

return (0);

}