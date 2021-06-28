#include "holberton.h"

/**
 * _strlen - Return the length of a string
 *
 * @s: Pointer to a string
 *
 * Return: 0
*/

int _strlen(char *s)
{
	int stringLength;
	while (*s != '\0')
	{
		s++;
		stringLength++;
	}
	return (stringLength);
}
