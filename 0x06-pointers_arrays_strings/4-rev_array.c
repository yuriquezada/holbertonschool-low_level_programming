#include "holberton.h"
#include <stdio.h>

/**
 * reverse_array - Reverse the content of an array of integers
 *
 * @a: array of integers
 * @n: number of elements of the array
 *
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i;
	int temp;

	for (i = 0; i < n--; i++)
	{
		temp = a[i];
		a[i] = a[n];
		a[n] = temp;
	}
}
