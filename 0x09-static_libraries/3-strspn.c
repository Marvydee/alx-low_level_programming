#include "main.h"

/**
 * _strspn - gets the lengty of a prefix substring
 * @s: initial segment
 * @accept: accepted bytes
 * Return: number of accepted bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int f, u, found;

	for (f = 0; *(s + f) != '\0'; f++)
	{
		found = 1;
		for (u = 0; *(accept + u) != '\0'; u++)
		{
			if (*(s + f) == *(accept + u))
			{
				found = 0;
				break;
			}
		}
		if (found == 1)
			break;
	}
	return (f);
}
