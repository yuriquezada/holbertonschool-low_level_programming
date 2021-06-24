#include "holberton.h"

/**
 * add - Add two integers and returns the result
 *
 * @num1: First operand
 * @num2: Second operand
 *
 * Return: 0
 */

int add(int num1, int num2)
{
	int result, tens, ones;

	result = num1 + num2;
	tens = result / 10;
	ones = result % 10;
	_putchar(tens + 48);
	_putchar(ones + 48);
	_putchar('\n');
	
	return(0);
}
