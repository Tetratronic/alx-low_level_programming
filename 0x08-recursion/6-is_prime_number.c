#include "main.h"

/** is_prime_number - checks if a number is prime or not
 * @n: number to check
 * Returns: 1 if true, else 0.
 */

int is_prime_number(int n)
{
	return( n % is_prime_number(n - (n - 2)));
}
