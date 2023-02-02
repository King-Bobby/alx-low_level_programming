#include "main.h"

/**
 * flip_bits - determine the number of bits you would need to flip
 * to get from one number to another.
 * @n: first number
 * @m: second number
 * Return: number of bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int n_bits = 0;
	unsigned long int diff;

	diff = n ^ m;
	while (diff > 0)
	{
		n_bits += (diff & 1);
		diff >>= 1;
	}
	return (n_bits);
}
