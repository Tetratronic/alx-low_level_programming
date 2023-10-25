#include "main.h"

/**
 * _strlen_recursion - recursively count lenght of string
 * @s: pointer to string
 * Return: 0
 */

inr _strlen_recursion(char *s){
	int count;

	if (!*s)
		return (count);
	count += 1;
	_strlen_recursion(s + 1);
}
