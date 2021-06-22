#include "holberton.h"

/**
 * print_alphabet - Print 10 times the alphabet in lowercase.
 *
 * Return: void.
*/

void print_alphabet_x10(void)
{
	int letter;
	int time;

	for (time = 0; time < 10; time++)
	{
		for (letter = 97; letter < 123; letter++)
		{
			_putchar(letter);
		}
		_putchar('\n');
	}
}
