#include "main.h"

int prime_helper(int n, int i);


/**
 * is_prime_number - checks if a number is prime or not
 * @n: number to check
 * Returns: 1 if true, else 0.
 */


int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime_helper(n, n - 1));
}


/**
 * prime_helper - helper adds a counter
 * @n: number to checl
 * @i: counter
 * Return: actual result
 */


int prime_helper(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (prime_helper(n, i - 1));
}
