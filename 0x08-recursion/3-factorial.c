#include "main.h"

/**
 * factorial - Recursively calculate factorials
 * @n: number to calculate factorial of
 * Return: int
 */

int factorial(int n)
{
	if (n == 0)
		return (1);
	if (n < 0)
		return (-1);
	return (n * factorial(n - 1));

}
