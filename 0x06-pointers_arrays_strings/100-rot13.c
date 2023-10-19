#include "main.h"

/**
 * rot13 - encodes a string usimg rot13
 * @str: input string
 * Return: str
 */
char *rot13(char *str)
{
	int i;

	for (i = 0; str[i]; i++)
	{
		char c = str[i];

		if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		{
			if ((c >= 'a' && c <= 'm') || (c >= 'A' && c <= 'M'))
			{
				str[i] = c + 13;
			}
			else
			{
				str[i] = c - 13;
			}
		}
	}
	return (str);
}
