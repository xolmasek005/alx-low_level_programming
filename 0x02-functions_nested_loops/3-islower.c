#include "main.h"

/**
 * _islower - checks for lower case using ASCII value char
 * @c: ASCII value
 * Return: 1 if it is lowercase or 0 otherwise
 */

int _islower(int c)
{
	if (c >= 97 && c <= 123)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
