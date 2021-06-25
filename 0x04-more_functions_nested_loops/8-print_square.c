#include "holberton.h"

/**
 * print_square - Print a square followed by a new line
 * @n: Number of times the character '_'
 * Return: void
*/

void print_square(int n)
{
	int i, m;

	if (n > 0)
		for (i = 0; i < n; i++)
		{
			for (m = 0; m < n; m++)
				_putchar('#');
			_putchar('\n');
		}
	else
		_putchar('\n');
}
