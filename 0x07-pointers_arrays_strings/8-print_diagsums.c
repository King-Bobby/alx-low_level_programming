#include "main.h"

/**
 * print_diagsums - prints sums of diagonals
 * @a: matrix
 * @size: size of matrix
 * Return: Always 0
 */
void print_diagsums(int *a, int size)
{
	int i;
	int Dsum1 = 0;
	int Dsum2 = 0;

	for (i = 0; i < size; i++)
	{
		Dsum1 = Dsum1 + a[(size + 1) * i];
		Dsum2 = Dsum2 + a[(size - 1) * (i + 1)];
	}
	printf("%d, %d\n", Dsum1, Dsum2);
}
