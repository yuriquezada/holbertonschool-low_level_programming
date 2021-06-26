#include <stdio.h>

/**
 * main - Find and print the largest prime factor
 *
 * Return: 0
*/

int main(void)
{
	int i, number = 612852475143;
	
	for (i = 2; i < number / 2 + 1; i++)
		if (number % i == 0)
		{
			number /= i;
			i--;
		}
	printf("%d", number);
	printf("\n");
	return (0);
}
