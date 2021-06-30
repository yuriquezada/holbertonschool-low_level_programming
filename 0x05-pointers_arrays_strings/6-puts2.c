#include "holberton.h"
#include <stdio.h>

/**
 * puts2 - Print every other character of a string
 *
 * @str: String to print
 *
 * Return: void
*/

void puts2(char *str)
{
	int stringLength = 0;

	while (str[stringLength] != '\0')
	{
		printf("%c",str[stringLength]);
		stringLength += 2;
	}
	printf("\n");
}
