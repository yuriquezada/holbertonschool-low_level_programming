#include "holberton.h"
#include <stdio.h>

/**
 * string_toupper - Change all lowercase letters to uppercase
 *
 * @a: array of char
 *
 * Return: a
 */

char *string_toupper(char *a)
{
	int i, len = 0;

	while (*(a + len) != '\0')
		len++;
	for (i = 0; i < len; i++)
	{
		if (a[i] >= 'a' && a[i] <= 'z')
			a[i] -= 32;
	}
	return (a);
}
