#include "main.h"

/**
 *_pow_recursion - function to output values of recursoion of the values
 *
 *@x: stands for a value whose power is to be got
 *@y: stands for the value of the multiple
 *
 *Return: returns 1 on correct execution and -1 if otherwise
 */

int _pow_recursion(int x, int y)
{
	int n = x;

	if (y < 0)
		return (-1);

	else if (n == 0)
		return (1);

	n *= _pow_recursive(x, y - 1);

	return (n);
}
