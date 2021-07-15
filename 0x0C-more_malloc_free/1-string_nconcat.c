#include "holberton.h"
#include <stdlib.h>
/**
 * string_nconcat - Concatenate two strings
 * @s1: string 1
 * @s2: string 2
 * @n: bytes of s2
 * Return: Pointer or NULL
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int i, len1 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] != '\0'; i++)
		len1++;
	p = malloc(len1 + n + 1);
	if (p == NULL)
		return (NULL);
	for (i = 0; i < len1; i++)
		p[i] = s1[i];
	for (i = 0; i < n; i++)
		p[i + len1] = s2[i];
	p[i + len1] = '\0';
	return (p);
}
