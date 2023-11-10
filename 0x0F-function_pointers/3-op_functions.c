#include "3-calc.h"
#include <stdlib.h>

/**
 * op_add - add integers
 * @a: first arg
 * @b: second arg
 * Return: Result
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - substract ints
 * @a:fist
 * @b:sec
 * Return: result
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiply 2 values
 * @a: first value
 * @b: second value
 * Return: result
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divide 2 values
 * @a: value one
 * @b: second value
 * Return: result
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - modulo calculator
 * @a: value one
 * @b: val two
 * Return: result
 */

int op_mod(int a, int b)
{
	return (a % b);
}
