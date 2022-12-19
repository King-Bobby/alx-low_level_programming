#include "main.h"

/**
 * puts2 - prints a charcter then new line till end of string
 * @str: string
 * return: nothing
 */
void puts2(char *str)
{
	int a = 0;
	int b;

	while (str[a] != '\0')
	{
		a++;
	}
	for (b = 0; b < a; b = b + 2)
	{
		putchar(str[b]);
	}
	putchar('\n');
}
