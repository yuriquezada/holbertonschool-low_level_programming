#include "holberton.h"
#include <stdlib.h>

/**
 * array_range - Creates an array of integers
 * @min: Maximum value
 * @max: Minimum value
 * Return: Pointer or NULL
 */

int *array_range(int min, int max)
{
	int i;
	int *p;

	if (min > max)
		return (NULL);
	p = malloc(sizeof(*p) * (max - min + 1));
	if (p == NULL)
		return (NULL);
	for (i = 0; i < (max - min + 1); i++, min++)
		p[i] = min;
	return (p);
}
