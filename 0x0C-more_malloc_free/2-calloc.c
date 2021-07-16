#include "holberton.h"
#include <stdlib.h>

/**
 * _calloc - Allocate memory for an array, using malloc
 * @nmemb: Number of elements in array
 * @size: Number of bytes of each element
 * Return: Pointer or NULL
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;

	if (memb == 0 || size == 0)
        return (NULL);
	p = malloc(nmemb * size);
	if (p == NULL)
		return (NULL);
	for (i = 0; i < (nmemb * size; i++))
		p[i] = 0;
	return (p);
}
