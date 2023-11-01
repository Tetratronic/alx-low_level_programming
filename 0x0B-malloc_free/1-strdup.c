#include <stdlib.h>
#include <stddef.h>
#include "main.h"
#include <string.h>

/**
 * _strdup - copies a string
 * @str: string to copy
 * Return: NULL or pointer to copy of string
 */

char *_strdup(char *str)
{
	char *strcpy;
	unsigned long int i;

	if (!str)
		return (NULL);
	strcpy = malloc(sizeof(char) * strlen(str) + 1);

	if (strcpy == NULL)
		return (NULL);
	for (i = 0; i < strlen(str); i++)
		strcpy[i] = str[i];

	return (strcpy);
}
