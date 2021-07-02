#include "holberton.h"
#include <stdio.h>

/**
 * leet - Encode a string into 1337
 *
 * @a: array of char
 *
 * Return: a
 */

char *leet(char *a)
{
	int i, len =0;

	while (*(a + len) != '\0')
		len++;
	for (i = 0; i < len; i++)
	{
		if (a[i] == 'a' || a[i] == 'A')
			a[i] = '4';
		else if (a[i] == 'e' || a[i] == 'E')
			a[i] = '3';
		else if (a[i] == 'o' || a[i] == 'O')
			a[i] = '0';
		else if (a[i] == 't' || a[i] == 'T')
			a[i] = '7';
		else if (a[i] == 'l' || a[i] == 'L')
			a[i] = '1';
		else
			a[i] = a[i];
	}
	return (a);
}
