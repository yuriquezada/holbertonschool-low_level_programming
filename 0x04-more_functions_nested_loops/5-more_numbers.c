#include "holberton.h"

/**
 * more_numbers -  Print 10 times the numbers from 0 to 14
 *
 * Return: void
*/
void more_numbers(void)
{
	int f, n;

	for (f = 0; f < 10; f++)
	{
		for (n = 0; n <= 14; n++)
		{
			if (n >= 10)
				_putchar('0' + (n / 10));
			_putchar('0' + (n % 10))
		}
		_putchar('\n');
	}
}
