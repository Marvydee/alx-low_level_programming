#include <stdio.h>

/**
 * main - entry point
 * int - declares a variable
 * Return: Always 0
 */
int main(void)
{
	int n;

	for (n = 0;  n <= 100; n++)
	{
		if (n % 3 == 0)
			printf("Fizz");
		else if (n % 5 == 0)
			printf("Buzz");
		else if (n % 3 == 0 && n % 5 == 0)
			printf("FizzBuzz");
		else
			printf("%d", n);

		if (n < 100)
			printf(" ");
	}
	return (0);
}

