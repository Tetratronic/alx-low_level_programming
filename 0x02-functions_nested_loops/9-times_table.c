#include <stdio.h>
#include "main.h"
/**
*times_table - function that returns a numbe's sign
*@void: void
(*
*this function prints a message and returns zero)?
*Return: returns zero or one
*/
void times_table(void)
{
	int i;

	int j;

	int start;

	for (i = 0; i < 10; i++)
	{
		start = 1;
		for (j = 0; j < 10; j++)
		{
			int num = i * j;

			if (start == 0)
			{
				_putchar(',');
				_putchar(' ');
			}
			if ((num / 10) != 0)
			{
				_putchar(48 + (num / 10));
				_putchar(48 + (num % 10));
			}
			else
			{
				if (start == 1)
				{
					_putchar(48 + num);
				}
				else
				{
					_putchar(' ');
					_putchar(48 + num);
				}
			}
			start = 0;
		}
		_putchar('\n');
	}
}
