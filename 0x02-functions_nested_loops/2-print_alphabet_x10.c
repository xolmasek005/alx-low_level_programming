#include "main.h"

/**
 * print_alphabet_x10 - on new line prints lowecase alphabets 10x
 * Return: void
 */

void print_alphabet_x10(void)
{
	char c = 'a';
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 26; j++)
		{
			_putchar(c + j);
		}
		_putchar(10);
	}
}
