#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: string one
 * @s2: string two
 * @n: number of bytes to add to string one
 * Return: pointer to the concatenated string or NULL
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *conc;
	unsigned int i, len2, j;

	if (strlen(s2) >= n)
	{
		conc = malloc(sizeof(char) * (strlen(s1) + strlen(s2)) + 1);
		len2 = strlen(s2) + 1;
	}
	else
	{
		conc = malloc(sizeof(char) * (strlen(s1) + n + 1));
		len2 = n + 1;
	}
	if (!conc)
		return (NULL);
	i = 0;

	while (i < strlen(s1))
	{
		conc[i] = s1[i];
		i++;
	}
	
	j = 0;

	while (i < len2)
	{
		conc[i] = s2[j++];
		i++;
	}
	conc[i] = '\0';

	return (conc);
}
