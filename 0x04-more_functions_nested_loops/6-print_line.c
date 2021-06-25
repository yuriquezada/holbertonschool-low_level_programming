#include "holberton.h"

/**
 * print_line - Draws a straight line in the terminal
 * @n: Number of times the character _
 * Return: void
*/

void print_line(int n);
{
	char i;

	if (n > 0)
		for (i = 0; i < n; i++)
			_putchar('_');
	_putchar('\n');
}
