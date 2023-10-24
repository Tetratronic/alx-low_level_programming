#include <stdio.h>
#include "main.h"
/**
*print_times_table - function that returns a numbe's sign
*@n: void
(*
*this function prints a message and returns zero)?
*Return: returns zero or one
*/
void print_times_table(int n)
{
	int i, j, num, start;

	if (n > 15)
		return;
	for (i = 0; i <= n; i++)
	{
		start = 1;
		for (j = 0; j <= n; j++)
		{
			num = i * j;
			if (start == 0)
			{
				_putchar(',');
				_putchar(' ');
				if (num < 100)
					_putchar(' ');
			}
			if ((num / 10) != 0)
			{
				if (num > 99)
				{
					_putchar(48 + (num / 100));
					num = num % 100;
				}
				_putchar(48 + (num / 10));
				_putchar(48 + (num % 10));
			}
			else
			{
				(start == 1) ? _putchar(48 + num) :
				((_putchar(' ')), (_putchar(48 + num)));
			}
			start = 0;
		}
		_putchar('\n');
	}
}
