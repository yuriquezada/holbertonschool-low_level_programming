#include "holberton.h"
#include <stdio.h>
#include <math.h>

/**
 * print_number - Prints an integer
 * @n: Integer to print
 * Return: void
*/

void print_number(int n)
{
	int i, power = 0, digit;
	
	if (n < 0)
	{
		n *= -1;
		_putchar('-');
	}
	for (i = 10; i <= n; i *= 10);
		power++;
	while(power >= 0)
	{
		digit = (int)(n / pow(10, power)) % 10;
		_putchar('0' + digit);
		power--;
	}
}
