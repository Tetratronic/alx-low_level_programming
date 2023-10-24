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
	int i;

	char ch;

	for (i = 0; i < 10; i++)
	{
		putchar(48 + i);
	}

	for (ch = 'a'; ch <= 'f'; ch++)
	{
		putchar(ch);
		if (ch == 'f')
			putchar('\n');
	}
	return (0);
}
