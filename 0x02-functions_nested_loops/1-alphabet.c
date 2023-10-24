#include <stdio.h>
#include "main.h"
/**
*print_alphabet - function that prints a specific message
*@void: void
(*
*this function prints a message and returns zero)?
*Return: returns zero
*/

void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}

	_putchar('\n');
}
