#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_to_98 - prints from n to 98
 * @n: starting number
 * Return: nothing
 */

void print_to_98(int n)
{
	int i = n;
	int start = 1;

	if (i > 99)
		for (i = n; i > 97; i--)
			if (start)
			{
				printf("%d", i);
				start = 0;
			}
			else
				printf(", %d", i);
	else
		for (i = n; i < 99; i++)
			if (start)
			{
				printf("%d", i);
				start = 0;
			}
			else
				printf(", %d", i);

	printf("\n");
}
