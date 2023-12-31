#include "main.h"

/**
 * _print_rev_recursion - Recursively prints a string
 * @s: pointer to array to print
 * Return: Nothing
 */
void _print_rev_recursion(char *s)
{
	if (!*s)
	{
		return;
	}
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
