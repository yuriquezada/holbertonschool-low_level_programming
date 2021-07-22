#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - print strings, followed by a new line
 * @separator: string to be printed between strings
 * @n: number of arguments to concatenate
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		if (i && separator)
			printf("%s", separator);
		if (va_arg(ap, char *))
			printf("%s", va_arg(ap, char *));
		else
			printf("nil");
	}
	printf("\n");
	va_end(ap);
}
