#include "main.h"

/**
 * _strlen_recursion - recursively count lenght of string
 * @s: pointer to string
 * Return: 0
 */

int _strlen_recursion(char *s){
	int count;
	count = 0;

	if (!*s)
		return (count);
	count += 1;
	return (_strlen_recursion(s + 1));
}