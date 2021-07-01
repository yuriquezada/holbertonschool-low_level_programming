#include "holberton.h"
#include <stdio.h>
/**
 * _strcpy - Copies the string to the buffer pointed
 *
 * @dest: Buffer pointed to by dest
 * @src: String pointed to by src
 *
 * Return: void
*/

char *_strcpy(char *dest, char *src)
{
	int stringLength = 0, i;
	char *newPointer = src;

	while (*newPointer != '\0')
	{
		stringLength++;
		newPointer++;
	}
	for(i = 0; i < stringLength; i++)
		dest[i] = src[i];
	return (dest);
}
