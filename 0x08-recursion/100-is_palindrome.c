#include "main.h"
#include <string.h>

/**
 * is_palindrome - checks if a string is palindome
 * @s: strung to check
 * Return: 1 or 0
 */

int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);

	if (*s == s[strlen(*s) - 1])
		return (is_palindrome(s + 1));
	else
		return (0);
}
