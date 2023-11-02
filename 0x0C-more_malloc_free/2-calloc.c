#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array
 * @nmemb: number of elemets
 * @size: size of each element in bytes
 * Return: pointer to array or NULL
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *arr;
	unsigned int i;

	if (!size || !nmemb)
		return (NULL);

	arr = malloc(nmemb * size);

	if (!arr)
		return (NULL);
	for (i = 0; i < nmemb; i++)
		arr[i] = 0;

	return (arr);
}
