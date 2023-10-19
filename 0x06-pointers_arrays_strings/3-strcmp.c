#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: first character
 * @s2: second character
 * Return: difference between the strings
 */
int _strcmp(char *s1, char *s2)
{
	char result = (*s1 - *s2);

	while (*s1 != '\0' && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (result);
}
