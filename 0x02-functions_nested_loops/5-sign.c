#include "holberton.h"

/**
 * print_sign - Print the sign of a number
 *
 * @n: number
 *
 * Return: -1, 0 or 1
*/

int print_sign (int n)
{
	if (n < 0)
	{
		putchar('-');
		return (-1);
	}
	else if (n == 0)
	{
		putchar('0');
		return (0);
	}
	else
	{
		putchar('+');
		return (1);
	}
}
