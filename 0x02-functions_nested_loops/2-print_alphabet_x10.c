#include <stdio.h>
#include "main.h"
/**
*print_alphabet_x10 - function that prints a specific message
*@void: void
(*
*this function prints a message and returns zero)?
*Return: returns zero
*/

void print_alphabet_x10(void)
{
	char i;

	int j;

	for (j = 0; j < 10; j++)
	{
		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}
		_putchar('\n');


	}
}
