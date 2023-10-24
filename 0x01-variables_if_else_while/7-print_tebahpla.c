#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
*main - function that prints the alphabet using putchat
*@void: void
(*
*this function prints a message and returns zero)?
*Return: returns zero
*/
int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
		if (ch == 'a')
			putchar('\n');
	}
	return (0);
}
