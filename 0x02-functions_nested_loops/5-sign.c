#include <stdio.h>
#include "main.h"
/**
*print_sign - function that returns a numbe's sign
*@c: int variable
(*
*this function prints a message and returns zero)?
*Return: returns zero or one
*/
int print_sign(int c)
{
	if (c > 0)
	{
		_putchar('+');
		return (1);
	}
	if (c < 0)
	{
		_putchar('-');
		return (-1);
	}
	if (c == 0)
	{
		_putchar(48);
		return (0);
	}
	return (0);
}
