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
	int i;

	if (min > max)
		return (NULL);

	arr = malloc((max - min + 1) * sizeof(int));

	if (!arr)
		return (NULL);

	for (i = 0; i <= max; i++)
		arr[i] = min++;

	return (arr);
}
