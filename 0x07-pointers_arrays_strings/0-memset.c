#include "main.h"

/**
 * _memset - constant byte is filled in memory
 * @s: mem. area
 * @b: const. byte
 * @n: byte filled
 * Return: returns pointer to desti.
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *ptr = s;

	while (n > 0)
	{
		*ptr = b;
		ptr++; 
		n--;
	}

	return s;
}
