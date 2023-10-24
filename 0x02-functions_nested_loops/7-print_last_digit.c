#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
*print_last_digit - function that returns a numbe's sign
*@c: int variable
(*
*this function prints a message and returns zero)?
*Return: returns zero or one
*/
int print_last_digit(int c)
{
	_putchar(48 + abs(c % 10));
	return (abs(c % 10));
}
