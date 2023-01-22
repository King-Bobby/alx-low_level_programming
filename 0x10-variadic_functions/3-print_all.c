#include "variadic_functions.h"

/**
 * print_char - prints char
 * @chaar: valist
 */
void print_char(va_list chaar)
{
	printf("%c", va_arg(chaar, int));
}

/**
 * print_int - prints integer
 * @innt: valist
 */
void print_int(va_list innt)
{
	printf("%d", va_arg(innt, int));
}

/**
 * print_float - prints float
 * @flooat: valist
 */
void print_float(va_list flooat)
{
	printf("%f", va_arg(flooat, double));
}

/**
 * print_charstr - prints char string
 * @strring: valist
 */
void print_charstr(va_list strring)
{
	char *str;

	str = va_arg(strring, char *);

	if (str == NULL)
	{
		printf("nil");
		return;
	}
	printf("%s", str);
}

/**
 * print_all - prints all inputs
 * @format: list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	va_list list;
	char *separator = "";
	int a, b = 0;
	datatype options[] = {
		{'c', print_char},
		{'i', print_int},
		{'f', print_float},
		{'s', print_charstr},
		{'\0', NULL}
	};

	va_start(list, format);
	while (format != NULL && format[b] != '\0')
	{
		a = 0;
		while (options[a].identifier != '\0')
		{
			if (options[a].identifier == format[b])
			{
				printf("%s", separator);
				options[a].func(list);
				separator = ", ";
			}
			a++;
		}
		b++;
	}
	va_end(list);
	printf("\n");
}
