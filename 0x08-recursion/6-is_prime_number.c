#include "main.h"

int _prime(int n, int i);

/**
 * is_prime_number - checks if a number is a prime number
 * @n: number
 * Return: 1 if prime, 0 if not
 */
int is_prime_number(int n)
{
	return (_prime(n, 1));
}


/**
 * _prime - Check if number is prime
 * @n: the number to be checked
 * @i: iteration
 * Return: 1 for prime or 0 composite
 */
int _prime(int n, int i)
{
	if (n <= 1)
	{
		return (0);
	}
	if (n % i == 0 && i > 1)
	{
		return (0);
	}
	if ((n / i) < i)
	{
		return (1);
	}
	return (_prime(n, i + 1));
}
