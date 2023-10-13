#include "main.h"

/**
 * more_numbers - prints numbers ten times
 * int - declares variable
 * _putchar - prints statement
 * Return: no return
 */
void more_numbers(void)
{
	int i, num;

	for (i = 0; i < 10; i++)
	{
		for (num = 0; num < 10; num++)
		{
			if (num >= 10)
				_putchar((num / 10) + 48);
				_putchar((num % 10) + 48);
		}
		_putchar('\n');
	}
}
