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
	int i = 0;

	while (n > 0)
	{
		s[i] = b;
		i++;
		n--;
	}
	return (s);
}
