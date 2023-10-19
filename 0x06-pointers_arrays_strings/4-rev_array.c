#include "main.h"

/**
 * reverse_array - reverse content of,
 * an array of integers
 * @a: first array
 * @n: number of elements of the array
 * Return: no return
 */
void reverse_array(int *a, int n)
{
	int i, temp;

	for (i = 0; i < n / 2; i++)
	{
		temp = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = temp;
	}
}
