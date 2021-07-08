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
	if (*s != '\0')
	{
		printf("%c", *s);
		_puts_recursion(s + 1);
	}
	else
		printf("\n");
}
