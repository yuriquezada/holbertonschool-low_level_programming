#include <stdlib.h>
#include <stdio.h>
/**
 * main - Print all possible combinations of single-digit numbers.
 *
 * Return: 0
*/
int main(void)
{
	int n;

	for (n = 48; n < 58; n++)
		putchar(n);
		putchar(32);
		putchar(44);
	putchar('\n');
	return (0);
}
