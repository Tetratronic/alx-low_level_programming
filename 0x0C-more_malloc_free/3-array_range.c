#include "main.h"
#include <stdlib.h>

/**
 * array_range - initializes an array and fills it from min to max
 * @min: min range
 * @max: max range
 * Return: Pointer to array or NULL
 */

int *array_range(int min, int max)
{
	int *arr;
	int i, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	arr = malloc(sizeof(int) * size);

	if (arr == NULL)
		return (NULL);

	for (i = 0; min <= max; i++)
		arr[i] = min++;

	return (arr);
}
