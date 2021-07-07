#include "holberton.h"

/**
 * _strspn - get the length of a prefix substring
 * @s: substring
 * @accept: initial string
 * Return: number
*/

unsigned int _strspn(char *s, char *accept)
{
	int i = 0, j = 0, c = 0;
	unsigned int number = 0;

	for (; s[i] != '\0' ; i++)
	{
		c = 0;
		for (; accept[j] != '\0'; j++)
			if (s[i] = accept[j])
				c = 1;
		if (c == 1)
			number += c;
		else
			break;
	}
	return (number);
}
