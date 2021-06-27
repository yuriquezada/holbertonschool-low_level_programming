#include "holberton.h"
#include <stdio.h>
#include <math.h>

/**
 * print_number - Prints an integer
 * @n: Integer to print
 * Return: 0
*/

void print_number(int n)
{
	int power10 = 1, digit;

	if (n < 0)
	{
		n *= -1;
		_putchar('-');
	}
	while(power10 * 10 <= number)
		power10 *= 10;
	while(power10 > 0)
	{
		digit = (n / power10) % 10;
		power10 /= 10;
		putchar('0' + digit);
	}
	return (0);
}
