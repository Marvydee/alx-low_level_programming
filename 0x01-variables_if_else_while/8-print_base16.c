#include <stdio.h>

/**
 * main - entry point
 * char - declares a variable
 * putchar - prints a statement
 * Return: Always 0 (success)
 */
int main(void)
{
	char b;

	for (b = '0'; b <= '9'; b++)
	{
		putchar(b);
	}
	for (b = 'a'; b <= 'f'; b++)
	{
		putchar(b);
	}
	putchar('\n');
	return (0);
}
