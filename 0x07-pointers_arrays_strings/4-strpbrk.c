#include "holberton.h"
/**
 *_strpbrk - search a string for any of a set of bytes
 *@s: substring
 *@accept: initial string
 *
 *Return: number
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j, c;

	for (i = 0; s[i] != '\0'; i++)
	{
		c = 0;
		for (j = 0; accept[j] != '\0'; j++)
			if (s[i] == accept[j])
				c = 1;
		if (c == 1)
			return (&s[i]);
	}
	if (c == 0)
		return (0);
}
