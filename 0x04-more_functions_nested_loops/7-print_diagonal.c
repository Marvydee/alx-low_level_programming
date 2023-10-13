#include "main.h"

/**
 * print_diagonal - prints diagonal line
 * @n: times diagonal line is printed
 * Return: no return
 */
void print_diagonal(int n)
{
	int i, gap;

		for (i = 0; i < n; i++)
		{
			for (gap = 0; gap < i; gap++)
			{
				_putchar(' ');
			}
			_putchar(92);
			if (n < (n - 1))
				_putchar('\n');
		}
		_putchar('\n');
}
