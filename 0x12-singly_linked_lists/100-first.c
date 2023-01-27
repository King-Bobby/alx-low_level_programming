#include <stdio.h>

/**
 * before_main - prints before main function
 * P.S: __attribute__ ((constructor)) is what makes it print before main
 */
void __attribute__ ((constructor)) before_main()
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
