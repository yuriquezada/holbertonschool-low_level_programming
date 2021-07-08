#include "holberton.h"

/**
 * _increase -  Return the square root of a number
 *
 * @n: Number
 *
 * Return: Natural square
 */

int _increase(int i, int n)
{
	if (i * i == n)
		return (i);
	if (i * i > n)
		return (-1);
	_increase(i + 1, n);
}

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_increase(0, n));
}

