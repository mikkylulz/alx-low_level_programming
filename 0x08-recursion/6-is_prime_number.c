#include "main.h"

/**
* is_prime_number - returns true if the number is prime
*
*@n: the number to check
*
*Return: true if the number is prime
*/

int is_prime_number(int n)
{
	int start = n / 2;

	if (n <= 1)
		return (0);
	return (is_prime(n, start));
}

/**
* is_prime - states if number is prime
*
* @n: integer
*
* @start: number to start checking from
*
* Return: integer
*/

int is_prime(int n, int start)
{
	if (start <= 1)
		return (1);
	else if (n % start == 0)
		return (0);
	return (is_prime(n, start - 1));
}
