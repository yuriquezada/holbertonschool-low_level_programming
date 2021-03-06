#include "holberton.h"

/**
 * _increase - Return the square root of a number with iterators
 * @i: root to check of the number
 * @n: number
 *
 * Description: This is a second function created.
 * Return: -1 or root of n
 */
int _increase(int i, int n)
{
	if (i * i == n)
		return (i);
	if (i * i > n)
		return (-1);
	return (_increase(i + 1, n));
}

/**
 * _sqrt_recursion - Return the square root of a number
 * @n: Number
 *
 * Return: Natural square
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_increase(0, n));
}
