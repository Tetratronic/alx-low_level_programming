#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - executes a function on each element of array
 * @array: array to use
 * @size: size of the array
 * @action: function to use on the array
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if (!array || !size || !action)
		return;

	for (i = 0; i < size; i++)

		action(array[i]);
}
