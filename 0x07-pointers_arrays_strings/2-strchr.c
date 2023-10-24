#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: pointer
 * @c: character to be located
 * Return: return null
 */
char *_strchr(char *s, char c)
{
	for (; *s != '\0'; s++)
		if (*s == c)
		{
			return (s);
		}
		else
		{
			return ('\0');
		}
}
