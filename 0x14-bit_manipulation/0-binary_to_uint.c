#include "main.h"
#include <stdio.h>
#include <string.h>
#include <math.h>

/**
 * binary_to_uint - convert a binary number to an unsigned int
 *
 * Return: converted number, or 0
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int decimal;

	decimal = 0;
	if (!b)
		return (0);
	for (i = 0; b[i]; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		decimal <<= 1;
		if (b[i] == '1')
			decimal += 1;
	}
	return (decimal);
}
