#include "main.h"

/**
 * _isdigit - checks for a digit
 * @c: input digit
 * Return: 1 if c is a digit, 0 in other case
 */
int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
