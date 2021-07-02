#include "holberton.h"
#include <stdio.h>

/**
 * main - concatenates two strings
 *
 * @dest: string to the dest
 * @src: string to append
 *
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int lenSrc = 0, lenDest = 0, i;

	while (*(dest + lenDest) != '\0')
		lenDest++;
	while (*(src + lenSrc) != '\0')
		lenSrc++;
	for (i = 0; i < lenSrc; i++)
		dest[i + lenDest] = src[i];
	dest[i + lenDest] = '\0';
	return (dest);
}
