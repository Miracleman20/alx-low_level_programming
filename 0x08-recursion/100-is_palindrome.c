#include "main.h"

/**
 *is_palindrome - checks if a string is a palindrome or not
 *@s: is the string holding variable in the palindrome function
 *
 *Return: returns 1 if string is a palindrome and -1 if not
 */

int is_palindrome(char *s)
{
	int index = 0;
	int str = find_strlen(s);

	if (!(*s))
		return (1);

	return (check_palindrome(s, str, index));
}
