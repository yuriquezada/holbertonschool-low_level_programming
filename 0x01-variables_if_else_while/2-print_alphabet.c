  
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - Print the alphabet in lowercase
 *
 * Return: 0
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	char alphabet = "abcdefghijklmnopqrstuvwxyz";
	char newLine = "\n";
	putchar(alphabet);
	putchar(newLine);
	return (0);
}
