#include "main.h"



void _puts(char *str)
{
	int i;

	for (str[i])
	{
		_putchar(str[i]);
		i++;
	}

	return ('\n');
}
