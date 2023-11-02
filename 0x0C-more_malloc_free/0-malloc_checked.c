#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory and returns pointer to allocated memory
 * @b: size to allocate
 * Return: pointer or 98
 */

void *malloc_checked(unsigned int b)
{
	void *mem;

	mem = malloc(b);
	if (!mem)
		exit(98);

	return mem;
}
