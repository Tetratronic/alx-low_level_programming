#include "main.h"

/**
 * _pow_recursion: recursively calculate x to power y
 * @x:num
 * @y: eponent
 * Return: result
 */

int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);
	if (y < 0)
		return (-1);
	return (x * _pow_recursion(x, y - 1));
}	
