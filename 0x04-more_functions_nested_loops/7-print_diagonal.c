#include "holberton.h"

/**
 * print_diagonal - Draw a diagonal line on the terminal
 * @n: Number of times the character _
 * Return: void
*/

void print_diagonal(int n);
{
	int i, s;

	for (i = 0; i < n; i++)
	{
		for (s = 0; s < i; s++)
			_putchar(' ');
		_putchar('\\');
		_putchar('\n');
	}
}
