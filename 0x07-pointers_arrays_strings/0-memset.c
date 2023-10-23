#include "main.h"

/**
 * _memset - fills a memory with a constant byte
 * @n: bytes to be filled
 * @s: memory area
 * @b: constant bytes
 * Return: return s
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *p = s;

	while (n > 0)
	{
		*p = b;
		p++;
		n--;
	}
	return (s);
}
