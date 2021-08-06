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
	int i, len;
	double sum = 0, pow_number = 0;
	unsigned int decimal;

	if (!b)
		return (0);
	len = strlen(b);
	for (i = len - 1; i >= 0; i--)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		if (b[i] == '1')
			sum += pow(2, pow_number);
		pow_number++;
	}
	decimal = (unsigned int)(sum);
	return (decimal);
}
