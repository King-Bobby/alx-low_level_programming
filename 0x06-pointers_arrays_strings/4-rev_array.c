#include "main.h"

/**
 * reverse_array - reverse an array
 * @a: an array
 * @n: no of elements in the array
 * Return: Nothing
 */
void reverse_array(int *a, int n)
{
	int b = 0;
	int c = n - 1;
	int d;

	while (b < c)
	{
		d = a[b];
		a[b] = a[c];
		a[c] = d;
		b++;
		c--;
	}
}
