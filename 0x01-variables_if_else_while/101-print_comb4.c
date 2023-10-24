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

	int k;

	for (i = 0; i < 8; i++)
	{
		for (j = i + 1; j < 9; j++)
		{
			for (k = j + 1; k < 10; k++)
			{
				putchar(48 + i);
				putchar(48 + j);
				putchar(48 + k);
				if (!(i == 7 && j == 8 && k == 9))
				{
					putchar(44);
					putchar(32);
				}
			}
		}

	}
	putchar('\n');
	return (0);
}
