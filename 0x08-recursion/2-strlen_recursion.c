#include "main.h"

int _strlen_recursion(char *s)
{
	int strlen = 0;
	if (*s)
	{
		strlen = strlen + 1;
		strlen += _strlen_recursion(s + 1);
	}

	return(strlen);
}
