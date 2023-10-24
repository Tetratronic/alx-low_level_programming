#include <stdio.h>
#include "main.h"
/**
*jack_bauer - function that returns a numbe's sign
*@void: void
(*
*this function prints a message and returns zero)?
*Return: returns zero or one
*/
void jack_bauer(void)
{
	int i;

	int j;

	for (i = 0; i < 24; i++)
	{
		for (j = 0; j < 60; j++)
		{
			_putchar(48 + (i / 10));
			_putchar(48 + (i % 10));
			_putchar(':');
			_putchar(48 + (j / 10));
			_putchar(48 + (j % 10));
			_putchar('\n');
		}
	}
}
