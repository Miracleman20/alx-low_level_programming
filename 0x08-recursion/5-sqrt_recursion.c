#include "main.h"

/**
 * find_sqrt - Used to find a square root of a value
 * @num: number whose square root you're to find its square root
 * @root: is the root value
 *
 * Return: is to return -1 for faulty compilation or execution
 */
int find_sqrt(int num, int root)
{
	if ((root * root) == num)
		return (root);

	if (root == num / 2)
		return (-1);

	return (find_sqrt(num, root + 1));
}

/**
 * _sqrt_recursion - is to output the values of the square root
 * @n: is the number to be squared
 *
 * Return: this returns  -1 when program doesnt run smoothly
 */
int _sqrt_recursion(int n)
{
	int root = 0;

	if (n < 0)
		return (-1);

	if (n == 1)
		return (1);

	return (find_sqrt(n, root));
}
