#include "holberton.h"

/**
 * print_last_digit - Print the last digit of a number
 *
 * @n: Number to check
 *
 * Return: n
 */


int _abs(int n)
{
	int r;

	r = n % 10;
	if (r < 0)
	{
		r *= -1;
		return (r);

	}
	else
		return (r);
}
