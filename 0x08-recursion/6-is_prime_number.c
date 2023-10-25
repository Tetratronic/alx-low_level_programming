#include "main.h"

/** is_prime_number - checks if a number is prime or not
 * @n: number to check
 * Returns: 1 if true, else 0.
 */

int is_prime(int n)
{
	return( n % is_prime(n - (n - 2)));
}
