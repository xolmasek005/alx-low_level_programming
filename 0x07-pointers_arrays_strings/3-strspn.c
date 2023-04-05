#include "main.h"

/**
 * _strspn - gets the length of a prefix substring.
 * @s: initial segment.
 * @accept: accepted bytes.
 * Return: the number of accepted bytes.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;
	int bool = 1;

	while (*(s + i) != '\0' && bool)
	{
		int j = 0;

		bool = 1;

		while (*(accept + j) != '\0')
		{
			if (*(s + i) == *(accept + j))
			{
				bool = 0;
				break;
			}
			j++;
		}

		if (bool)
			break;
		i++;
	}

	return (i);
}
