#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
		int n;
		int t;

			srand(time(0));
				n = rand() - RAND_MAX / 2;
					/* your code goes there */
				t = n;
				if (n > 5)
				{
					printf("Last digit of %d is %u greater than 5\n", n, t);
				}
				else if (n == 0)
				{
					printf("Last digit of %d is 0\n", n);
				}
				else if ((n < 6) != 0)
				{
					printf("Last digit of %d is less than 6 and not 0\n", n);
				}
					return (0);
}