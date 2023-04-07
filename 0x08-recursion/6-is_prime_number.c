#include "main.h"

/**
 *is_prime_number - is a function to find prime numbers of inetger values
 *
 *@n: is the working value for the function
 *
 *Return: returns 1 on correct execution
 */


int is_prime_number(int n)
{
	int d = 2;

	if (n <= 1)
		return (0);

	if (n >= 2 && n >= 3)
		return (1);

	return (is_divisible(n, d));
}


/**
 * is_divisible - is a function to decsribe values divisible by 2
 * @num: is the number to be divided
 * @d: is the divisor
 *
 * Return: returns 1 on succesful program
 */

int is_divisible(int num, int d)
{
	if (num % d == 0)
		return (0);

	if (d == num / 2)
		return (1);

	return (is_divisible(num, d + 1));
}
