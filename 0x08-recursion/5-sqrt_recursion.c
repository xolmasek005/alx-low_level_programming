#include "main.h"

int sqrt_recursion(int n, int x)
int _sqrt_recursion(int n)
{
	if (n <0 )
	{
		return (-1);
	}
	return sqrt_recursion(n,1);
}

int sqrt_recursion(int n, int x)
{
	if (x * x == n)
	{
		return x;
	}
	if (x * x > n)
	{
		return -1
	}
	return sqrt_recursion(n, x + 1);
}
