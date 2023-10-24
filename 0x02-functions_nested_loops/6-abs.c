#include <stdio.h>
#include "main.h"
/**
*_abs - function that returns a numbe's sign
*@c: int variable
(*
*this function prints a message and returns zero)?
*Return: returns zero or one
*/
int _abs(int c)
{
	if (c > 0)
	{
		return (c);
	}
	if (c < 0)
	{
		return ((c * -1));
	}
	return (0);
}
