#include <stdio.h>
#include <stdlib.h>

/**
 * main - Add positive numbers
 * @argc: Arguement count
 * @argv: Array of pointers to arguement strings
 * Return: 0 or 1
 **/

int main(int argc, char *argv[])
{
	int i, j, sum = 0, invalid = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
			if (!((argv[i][j] >= '0') && (argv[i][j] <= '9')))
			{
				invalid = 1;
				break;
			}
		if (!invalid)
			sum += atoi(argv[i]);
	}
	if (invalid)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", sum);
	return (0);
}
