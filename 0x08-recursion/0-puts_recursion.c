#include "holberton.h"
#include <stdio.h>

/**
 * _puts_recursion - print a string, followed by a new line
 *
 * @s: string
 *
 * Return: void
 */

void _puts_recursion(char *s)
{
	int i = 0;

	if (s[i] != '\0')
	{
		printf("%c", s[i]);
		s++;
		_puts_recursion(s);
	}
	else
		printf("\n");
}
