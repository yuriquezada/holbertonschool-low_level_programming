#include "holberton.h"
#include <stdio.h>

/**
 * rot13 - Encodes a string using rot13
 *
 * @a: array of char
 *
 * Return: a
 */

char *rot13(char *a)
{
	char *input, *output;
	int count, count2;

	input = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	output = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	count = 0;
	while (str[count] != '\0')
	{
		count2 = 0;
		while (input[count2] != '\0')
		{
			if (str[count] == input[count2])
			{
				str[count] = output[count2];
				break;
			}
			count2++;
		}
		count++;
	}
	return (str);
}
