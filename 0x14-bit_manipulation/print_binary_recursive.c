#include "main.h"
#include <stdio.h>

/**
 * print_successive_divisions - divide successively and print the remainders
 * @n: Duplicate number we should start with
 * Return: void
 */

void print_successive_divisions(unsigned long int n)
{
	if (n >= 2)
	{
		n >>= 1;
		print_successive_divisions(n);
		(n & 1) ? _putchar('1') : _putchar('0');
	}
}
