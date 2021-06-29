#include "holberton.h"

/**
 * print_rev - Print a string in reverse followed by a new line
 *
 * @s: Pointer to a string in reverse
 *
 * Return: stringLength
*/

void print_rev(char *s)
{
	int stringLength = 0;
	char *newPointer = s;

	while (*s != '\0')
	{
		s++;
		stringLength++;
	}
	while (s >= newPointer)
	{
		printf("%c", *s);
		s--;
	}
	printf("\n");
}
