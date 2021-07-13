#include "holberton.h"

/**
 * _strspn - get the length of a prefix substring
 * @s: substring
 * @accept: initial string
 * Return: number
*/

unsigned int _strspn(char *s, char *accept)
{
	int i, j, c;
	unsigned int number = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		c = 0;
		for (j = 0; accept[j] != '\0'; j++)
			if (s[i] == accept[j])
				c = 1;
		if (c == 1)
			number++;
		else
			break;
	}
	return (number);
}
