#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 * @n: number of arguments to add
 * Return: sum or 0
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum = 0;

	va_list ap;
	va_start (ap, n);
	if (n == 0)
		return (0);
	for (i = 0; i < n; i++)
		sum += va_arg (ap, int);
	va_end (ap);
	return (sum);
}
