#include "main.h"
/**
 * _strpbrk - Start
 * @s: initial segment.
 * @accept: accepted bytes.
 * Return: the number of accepted bytes.
 */
char *_strpbrk(char *s, char *accept)
{
	int i

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			return (s);
		}
	s++
	}
	return ('\0');
}
