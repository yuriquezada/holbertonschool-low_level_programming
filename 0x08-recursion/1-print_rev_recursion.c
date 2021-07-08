#include "holberton.h"
#include <stdio.h>

/**
 * _print_rev_recursion - print a string in reverse
 *
 * @s: string
 *
 * Return: void
 */

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		printf("%c", *s);
	}
}