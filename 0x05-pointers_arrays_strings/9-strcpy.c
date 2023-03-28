#include "main.h"

/**
 * _strcpy - function that copies the string pointed to by src
 * @dest: char pointer
 * @src: char pointer
 * Return: char.
 */
char *_strcpy(char *dest, char *src)
{
	int count = 0;

	while (count >= 0)
	{
		*(dest + count) = *(src + count);
		if (*(src + count) == '\0')
			break;
		count++;
	}
	return (dest);
}
