#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - Print the lowercase alphabet in reverse
 *
 * Return: 0
*/
int main(void)
{
	char l;

	for (l = 'z'; l <= 'a'; l--)
		putchar(l);
	putchar('\n');
	return (0);
}
