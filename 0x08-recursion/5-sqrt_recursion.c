#include "main.h"

int sqrt_helper(int n, int i);

/**
 * _sqrt_recursion - calculate sqrt root
 * @n: find sqare root of n
 * Return: resutl
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (sqrt_helper(n, 0));
}

/**
 * sqrt_helper - helper for sqrt
 * @n: number given
 * @i: counter
 * Return: Result
 */

int sqrt_helper(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (sqrt_helper(n, i + 1));
}
