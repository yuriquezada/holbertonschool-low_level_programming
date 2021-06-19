#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - Print all the numbers of base 16 in lowercase
 *
 * Return: 0
*/
int main(void)
{
	char l;

	for (l = '0'; l <= '9'; l++)
		putchar(l);
	for (l = 'a'; l <= 'f'; l++)
		putchar(l);
	putchar('\n');
	return (0);
}
