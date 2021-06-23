#include "holberton.h"

/**
 * _islower - Check for lowercase character
 *
 * Description: Check for lowercase character. Return 1 if c is lowercase, return 0 otherwise
 *
 * Return: void
*/

int _islower(int c){
	if (c >= 97 && c <= 122)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
