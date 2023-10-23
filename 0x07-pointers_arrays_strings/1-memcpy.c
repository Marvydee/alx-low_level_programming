#include "main.h"

/**
 * _memcpy - copies memory area
 * @n: number of bytes
 * @src: source
 * @dest: destination
 * Return: return dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *d = dest;
	const char *s = src;

	while (n > 0)
	{
		*d = *s;
		d++;
		s++;
		n--;
	}
	return (dest);
}
