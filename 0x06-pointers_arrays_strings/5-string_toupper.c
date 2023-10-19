#include "main.h"

/**
 * string_toupper - changes lowercase letters,
 * of a string to uppercase
 * @str: string
 * Return: to dest
 */
char *string_toupper(char *str)
{
	char *ptr = str;

	while (*ptr)
	{
		if (*ptr >= 'a' && *ptr <= 'z')
		{
			*ptr = *ptr - 'a' + 'A';
		}
		ptr++;
	}
	return (str);
}
