#ifndef _VARIADIC_FUNCTIONS_H
#define _VARIADIC_FUNCTIONS_H
#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

/**
 * struct data - has all the data types
 * @identifier: to identify the function to be used 
 * @func: function pointer
 */
typedef struct data
{
	char identifier;
	void (*func)(va_list);
} datatype;

#endif
