#include "main.h"

/**
 * _sqrt_recursion - prints the natural swuare
 * root of a number
 * @n: number
 * Return: return the natural square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0 || n == 1)
	{
		return (n);
	}
	return (sqr_root(n, 1));
}

/**
 * sqr_root - prints the natural square root
 * of a number
 * @n: number
 * @i: iterator
 * Return: return the natural square root
 */
int sqr_root(int n, int i)
{
	if (i * i == n)
	{
		return (i);
	}
	if (i * i > n)
	{
		return (-1);
	}
	return (sqr_root(n, i + 1));
}
