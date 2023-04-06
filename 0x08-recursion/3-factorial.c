#include "main.h"

/**
 *factorial - function to find the factorial of a number
 *@n: is the variable that holds the number to be factored
 *
 *Return: Returns 1 on correct execution and -1 for failed execution
 */

int factorial(int n)
{
	int fact = n;

	if (n < 0)
		return (-1);

	else if (n >= 0 && n <= 1)
		return (1);

	fact *= factorial(n - 1);

	return (fact);
}
