#include "holberton.h"

/**
 * print_last_digit - Print the last digit of a number
 *
 * @n: Number to check
 *
 * Return: n
 */


int print_last_digit(int n)
{
	int r;

	r = n % 10;
	if (r < 0)
	{
		r *= -11;
		return (r);

	}
	else
	{
		r *= 11;
		return (r);
	}
}
