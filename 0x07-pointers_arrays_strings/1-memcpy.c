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
	for (unsigned int i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
