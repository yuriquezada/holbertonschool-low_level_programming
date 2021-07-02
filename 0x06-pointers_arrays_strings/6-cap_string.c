#include "holberton.h"
#include <stdio.h>

/**
 * cap_string - Capitalizes all words of a string
 *
 * @a: array of char
 *
 * Return: a
 */

char *cap_string(char *a)
{
	int i, len = 0;

	while (*(a + len) != '\0')
		len++;
	for (i = 0; i < len; i++)
	{
		if ((a[0] >= 'a') && (a[0] <= 'z'))
			a[0] -= 32;
		if ((a[i] == ' ') || (a[i] == 9) || (a[i] == '\n') || (a[i] == ',') || (a[i] == ';') || (a[i] == '.') || (a[i] == '!') || (a[i] == '?') || (a[i] == '\"') || (a[i] == '(') || (a[i] == ')') || (a[i] == '{') || (a[i] == '}'))
			if ((a[i + 1] >= 'a') && (a[i + 1] <= 'z'))
			a[i + 1] -= 32;
	}
	return (a);
}
