#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * create_array - function initializes array with a specific char
 * @size: size of the array
 * @c: char with which to inialize array
 * Return: ptr to the array or null
 */

char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	arr = malloc(sizeof(char) * size);

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		arr[i] = c;
	return
		arr;

}
