#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
*main - function that prints a specific message
*@void: void
(*
*this function prints a message and returns zero)?
*Return: returns zero
*/
int main(void)
{
	int n;

	int digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	digit = n % 10;

	if (digit > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, digit);
		return (0);
	}
	if (digit == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, digit);
		return (0);
	}
	if (digit < 6)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, digit);
		return (0);
	}
	return (0);
}
