#include "main.h"

/**
 * print_diagonal - prints diagonal line
 * @n: times diagonal line is printed
 * Return: no return
 */
void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i, gap;

		for (i = 0; i < n; i++)
		{
			for (gap = 0; gap < i; gap++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
