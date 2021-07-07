#include "holberton.h"
/**
 *_strpbrk - search a string for any of a set of bytes
 *@s: substring
 *@accept: initial string
 *
 *Return: &s[i] or NULL
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j, c, number = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		c = 0;
		for (j = 0; accept[j] != '\0'; j++)
			if (s[i] == accept[j])
				c = 1;
		if (c == 1)
		{
			number++;
			return (&s[i]);
		}
	}
	if (number == 0)
		return NULL;
}
