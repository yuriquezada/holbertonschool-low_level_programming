#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - Print the last digit of n
 *
 * Return: 0
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n%10 > 5)
		printf("%d and is greater than 5\n", n);
	elseif (n%10 == 0)
		printf("%d and is 0\n", n);
	else
		printf("%d and is less than 6 and not 0\n", n);

	return (0);
}
