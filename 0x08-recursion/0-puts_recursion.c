#include "main.h"

/*
 * _puts_recursion - this is the recursive function that acts as  put()
 * @s: input for string
 * Return: 0 on success
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
