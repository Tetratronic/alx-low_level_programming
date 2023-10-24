#include <stdio.h>
#include <unistd.h>
/**
*main - function that prints a specific message
*@void: void
(*
*this function prints a message using the write function)?
*Return: returns zero
*/
int main(void)
{
	char x[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(1, &x, 59);

	return (1);
}
