#include <stdio.h>

/**
 * main - Print all arguments it receives
 * @argc: Arguement count
 * @argv: Array of pointers to arguement strings
 * Return: 0
 **/

int main(int argc, char *argv[])
{
	int i = 0;

	argc = argc;
	for (; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
