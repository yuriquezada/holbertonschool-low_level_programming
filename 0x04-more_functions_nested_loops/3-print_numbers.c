#include "holberton.h"

/**
 * print_numbers - Print the numbers, from 0 to 9
 *
 * Return: 0
*/
void print_numbers(void)
{
	char n;

	for (n = '0'; n <= '9'; n++)
		_putchar(n);
	_putchar('\n');
	return (0);
}
