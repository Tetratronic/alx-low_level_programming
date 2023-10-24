#include <stdio.h>

/**
 *main - print number total
 *Return: the sum of numbers
 */

int main(void)
{
	unsigned long unsigned int a, b, i, res, start;

	a = 0;
	b = 1;
	start = 1;
	for (i = 0; i < 98; i++)
	{
		res = a + b;
		a = b;
		b = res;
		if (start == 0)
			printf(", ");
		printf("%lu", res);
		start = 0;
	}
	printf("\n");
	return (0);
}
