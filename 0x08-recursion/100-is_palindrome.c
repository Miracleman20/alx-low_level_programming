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

/**
 *check_palindrome - is a function that checks for if a string is a palindrome
 *@s: is the string holding variable
 *@str: is the string to be cjecked for being a palindrome
 *@index: is the index of a charcter in a string pointer
 *
 * Return: returns a value of 1
 */

int check_palindrome(char *s, int str, int index)
{
	if (s[index] == s[str / 2])
		return (1);

	if (s[index] == s[str - index - 1])
		return (check_palindrome(s, str, index + 1));

	return (0);
}

/**
 *
 *
 *
 *
 *
 */

int find_strlen(char *s)
{
	int str = 0;

	if (*(s + str))
	{
		str++;
		str += find_strlen(s + str);
	}

	return (str);
}
