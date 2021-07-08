#include "holberton.h"

#include "holberton.h"

/**
 * _increase - Return if the input is a prime number
 * @i: root to check of the number
 * @n: number
 *
 * Description: This is a second function created.
 * Return: 0 or 1
 */

int _increase(int i, int n)
{
	if (n == 2)
		return (2);
	if (n % 2 == 0)
		return (0);
	if ((n % i == 0) && (n != i))
		return (0);
	if ((n % i == 0) && (n == i))
		return (1);
	return (_increase(i + 1, n));
}

/**
 * is_prime_number - Return if the input is a prime number
 * @n: Number
 *
 * Return: 0 or 1
 */
int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	return (_increase(2, n));
}
