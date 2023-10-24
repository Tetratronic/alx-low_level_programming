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

	int j;

	int start;

	start = 1;

	for (i = 0; i < 100; i++)
	{
		for (j = i + 1; j < 100; j++)
		{
			if (start == 0)
			{
				putchar(44);
				putchar(32);

			}

			putchar(48 + (i / 10));
			putchar(48 + (i % 10));
			putchar(32);
			putchar(48 + (j / 10));
			putchar(48 + (j % 10));
			if (start)
			{
				start = 0;
			}
		}
	}

	putchar('\n');
	return (0);
}
