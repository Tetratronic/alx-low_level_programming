#include "main.h"

/**
 * _strlen_recursion - recursively count lenght of string
 * @s: pointer to string
 * Return: int
 */

int _strlen_recursion(char *s){
	int count;

	if (*s != NULL)
	{
		count = 1;
		count += _strlen_recursion(s + 1);
	}
	return (count);
}
