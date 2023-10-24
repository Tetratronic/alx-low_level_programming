#include <stdio.h>
#include "main.h"
#include <ctype.h>
/**
*_isalpha - function that returns if a character is lowercase
*@c: inr variable
(*
*this function prints a message and returns zero)?
*Return: returns zero or one
*/

int _isalpha(int c)
{
	if (isalpha(c) != 0)
	{
		return (1);
	}
	return (0);
}
