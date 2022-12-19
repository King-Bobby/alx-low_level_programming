#include "main.h"

/**
 * print_array - prints arrray of integers
 * @a: array
 * @n: number of elements of the array to be printed
 *
 * return: nothing
 */
void print_array(int *a, int n)
{
	int b;

	for (b = 0; b < n; b++)
	{
		printf("%d", a[b]);
		if (b != (n - 1))
		{
			printf(", ");
		}
	}
	printf("\n");
}
