#include <stdio.h>
#include <stdlib.h>

/**
 * main - Multiplies two numbers
 * @argc: Arguement count
 * @argv: Array of pointers to arguement strings
 * Return: 0 or 1
 **/

int main(int argc, char *argv[])
{
	int a, b;

	argc = argc;
	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}
	a = atoi(argv[1]);
	b = atoi(argv[2]);
	printf("%d", a * b);
	return (0);
}
