#include "main.h"

/**
 * cap_string - capitalizes all word of a string
 * @str: input string
 * Return: str
 */
char *cap_string(char *str)
{
	int cap_next = 1;
	char *ptr = str;

	while (*ptr)
	{
		if (cap_next)
		{
			if ((*ptr >= 'a' && *ptr <= 'z'))
			{
				*ptr -= ('a' - 'A');
			}
			cap_next = 0;
		}
		if (*ptr == ' ' || *ptr == '\t' || *ptr == '\n' ||
				*ptr == ',' || *ptr == ';' || *ptr == '.' ||
				*ptr == '!' || *ptr == '?' || *ptr == '"' ||
				*ptr == '(' || *ptr == ')' || *ptr == '{' || *ptr == '}')
		{
			cap_next = 1;
		}
		ptr++;
	}
	return (str);
}
