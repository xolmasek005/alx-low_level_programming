#include "main.h"
int prime(int n, int x);

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (prime(n,n -1));
}

int prime(int n, int x)
{
	if (n % x == 0 && x > 0)
	{
		return (0);
	}
	if (x == 1)
	{
		return (1);
	}
	return (prime(n, x-1));
}
