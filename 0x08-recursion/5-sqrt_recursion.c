#include "main.h"

/**
 * _Sroot - find square root of n
 * @n: number
 * @root: possible root
 * Return: square root value or -1 if error
 */

int _Sroot(int n, int root)
{
	if (root * root > n)
	{
		return (-1);
	}
	if (root * root == n)
	{
		return (root);
	}
	return (_Sroot(n, root + 1));
}

/**
 * _sqrt_recursion - find natural square root of n
 * @n: number
 * Return: square root value or -1 if error
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (_Sroot(n, 0));
}
