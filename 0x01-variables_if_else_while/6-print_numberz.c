#include <stdio.h>

/**
 * main - entry point
 * char - declare variable
 * putchar - prints statement
 * Return: Always 0 (success)
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		printf("%d", num);
	}
	putchar('\n');
	return (0);
}
