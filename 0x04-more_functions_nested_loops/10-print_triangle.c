#include "holberton.h"

/**
 * print_triangle - prints a triangle, followed by a new line
 * @size: The size of the triangle
 * Return: void
*/

void print_triangle(int size)
{
	int i, space, numberSign;

	if (size > 0)
		for (i = 0; i < size; i++)
		{
			for (space = size - i -1; space > 0; space--)
				_putchar(' ');
			for (numberSign = 0; numberSign < i + 1; numberSign++)
				_putchar('#');
			_putchar('\n');
		}
	else
		_putchar('\n');
}
