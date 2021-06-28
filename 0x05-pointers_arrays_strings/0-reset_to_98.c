#include "holberton.h"

/**
 * reset_to_98 - Updates the value it points to to 98
 *
 * Return: void
*/
void reset_to_98(int *n)
{
	int newNumber = 98;
	n = &newNumber;
}
