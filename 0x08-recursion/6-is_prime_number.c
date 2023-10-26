#include "main.h"

/**
 * is_prime_number - checks if a number is a
 * prime number
 * @n: number
 * Return: return 1
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (prime_check(n, 2));
}

/**
 * prime_check - checks if a number is a
 * prime number
 * @n: number
 * @i: iterator
 * Return: return 1
 */
int prime_check(int n, int i)
{
	if (i * i > n)
	{
		return (1);
	}
	if (n % i == 0)
	{
		return (0);
	}
	return (prime_check(n, i + 1));
}
