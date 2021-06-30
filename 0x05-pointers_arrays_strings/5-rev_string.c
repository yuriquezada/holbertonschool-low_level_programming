#include "holberton.h"
#include <stdio.h>

/**
 * rev_string - Reverses a string
 *
 * @s: Pointer to a string in reverse
 *
 * Return: stringLength
*/

void rev_string(char *s)
{
	int stringLength = 0, i;

	while (*s != '\0')
	{
		stringLength++;
		s++;
	}
	for (i = stringLength + 1; i > 0; i--)
	{
		printf("%c", *s);
		s--;
	}
	printf("\n");
}
