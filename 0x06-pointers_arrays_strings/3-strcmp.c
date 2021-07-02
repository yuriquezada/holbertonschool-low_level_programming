#include "holberton.h"
#include <stdio.h>

/**
 * _strcmp - function that compares two strings
 *
 * @s1: string
 * @s2: string
 *
 * Return: result
 */

int _strcmp(char *s1, char *s2)
{
	int lenS1 = 0, lenS2 = 0, i, result;

	while (*(s1 + lenS1) != '\0')
		lenS1++;
	while (*(s2 + lenS2) != '\0')
		lenS2++;
	for (i = 0; i < lenS1; i++)
	{
		result = s1[i] - s2[i];
		if (s1[i] != s2[i])
			break;
	}
	return (result);
}
