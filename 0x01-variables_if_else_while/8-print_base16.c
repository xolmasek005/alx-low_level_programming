#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
int n = 48;
int c = 'a';
while (n <= 57)
{
putchar(n);
n += 1;
}
while (c <= 'f')
{
putchar(c);
c++;
}
putchar('\n');
return (0);
}
