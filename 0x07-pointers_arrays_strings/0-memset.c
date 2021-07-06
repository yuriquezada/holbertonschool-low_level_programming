#include "holberton.h"
/**
 *_memset - fill a block of memory with a specific value
 *@s: memory area
 *@b: constant byte
 *@n: bytes of the memory
 *
 *Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
