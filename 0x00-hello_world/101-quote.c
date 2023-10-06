#include <unistd.h>

/**
 * main - entry point
 *
 * char - declares a character
 *
 * write - prints a statement
 *
 * Return: Always 1 (success)
 */
int main(void)
{
	char message[] = "and that piece of art is useful"" - Dora Korpar, 2015-10-19\n";
	
	write(2, message, 59);
	return (1);
}
