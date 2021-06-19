#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - Print rints all single digit numbers of base 10
 *
 * Return: 0
*/
int main(void)
{
	char n;

	for (n = '0'; n <= '9'; n++)
		putchar(n);
	putchar('\n');
	return (0);
}
