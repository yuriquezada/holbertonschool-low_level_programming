#include "holberton.h"
#include <stdio.h>

/**
 * _strncpy - function that copies a string
 *
 * @dest: string to the dest
 * @src: string to append
 * @n: number of bytes from src
 *
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int lenSrc = 0, lenDest = 0, i;

	while (*(dest + lenDest) != '\0')
		lenDest++;
	while (*(src + lenSrc) != '\0')
		lenSrc++;
	for (i = 0; i < n; i++)
		dest[i] = src[i];
	dest[lenDest] = '\0';
	return (0);
}
