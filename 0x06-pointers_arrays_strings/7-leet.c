#include "main.h"

/**
 * leet - encodes a string into 1337
 * @str: input string
 * Return: str
 */


char *leet(char *str)
{
	char leet_map[256] = {0};
	char *letters = "aAeEoOtTlL";
	char *leet_codes = "44370171";

	for (int i = 0; letters[i]; i++)
	{
		leet_map[(int)letters[i]] = leet_codes[i];
	}
	for (int i = 0; str[i]; i++)
	{
		if (leet_map[(int)str[i]])
		{
			str[i] = leet_map[(int)str[i]];
		}
	}
	return (str);
}

