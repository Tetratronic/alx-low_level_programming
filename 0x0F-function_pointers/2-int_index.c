#include "function_pointers.h"

/**
 * int_index - search for integer in array
 * @array: array to search
 * @size: size of array
 * @cmp: comparison function
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (!array || !size || !cmp)
		return -1;
	if (size < 0)
		return -1;

	for(i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return i;
	}

	return 0;
}
