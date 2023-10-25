#include "main.h"

/**
 * _puts_recursion - Recursively prints a string
 * @s: pointer to array to print
 * Return: Nothing
 */
void _puts_recursion(char *s)
{
	if (!*s)
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
