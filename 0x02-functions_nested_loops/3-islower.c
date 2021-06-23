#include "holberton.h"

/**
 * _islower - Check for lowercase character
 *
 * Description: Check for lowercase character.
 *
 * Return: 0 or 1
*/

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
