#include "main.h"

/**
 * print_numbers - prints numbers from 0-9
 * digit - number
 * char - declares variable
 * Return: no return
 */
void print_numbers(void)
{
	char digit = 0;

	while (digit <= 9)
	{
		_putchar(digit);
		digit++;
	}
	_putchar('\n');
}

