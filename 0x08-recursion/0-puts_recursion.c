#include "main.h"

/*
 * _puts_recursion - recursive function
 * @s: input for string
 * 
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);	
	}

	else
		_putchar('\n');
}
