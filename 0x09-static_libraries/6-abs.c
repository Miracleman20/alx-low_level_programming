#include "main.h"

/**
 *_abs - tis function is for finding abstract values
 *@n: represents the numerical value to be determined
 *
 *Return: returns 1
 */

int _abs(int n)
{
	if (n > 0)
		return (n);

	else if (n < 0)
		return (-n);

	else
		return (n);
}
