#include <stdio.h>

/**
 * fizz_buzz - Print that prints the numbers from 1 to 100
 *
 * Return: void
*/

int main(void)
{
	int i;

	for (i = 1; i < 100; i++)
	{
		if (i % 15 == 0)
			printf("FizzBuzz");
		else if (i % 5 == 0)
			printf("Buzz");
		else if (i % 3 == 0)
			printf("Fizz");
		else
			printf("%d",i);
		printf(' ');
	}
	printf("Buzz");
	printf("\n");
	return (0);
}
