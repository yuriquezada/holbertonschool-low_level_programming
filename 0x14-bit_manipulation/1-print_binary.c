#include <stdio.h>
#include "main.h"

/**
 * print_binary - print the binary representation of a number
 * n: number to print in binary
 * Return: void
 */

void print_binary(unsigned long int n)
{
	if (n == 0)
		_putchar('0');
	else
		print_successive_divisions(n * 2);
}
