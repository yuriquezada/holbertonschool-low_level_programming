#include "holberton.h"
#include <stdio.h>

/**
 * rot13 - Encodes a string using rot13
 *
 * @a: array of char
 *
 * Return: a
 */

char *rot13(char *a)
{
	int lenS = 0, i;

	while (*(a + lenS) != '\0')
		lenS++;
	for (i = 0; i < lenS; i++)	
	{
		if ((a[i] >= 'N' && a[i] <= 'Z') || (a[i] >= 'n' && a[i] <= 'z'))
			a[i] -= 13;
		else if ((a[i] >= 'A' && a[i] <= 'M') || (a[i] >= 'a' && a[i] <= 'm'))
			a[i] += 13;
		else
			a[i] = a[i];
	}
	return (a);
}
