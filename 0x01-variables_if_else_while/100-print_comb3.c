#include <stdlib.h>
#include <stdio.h>
/**
 * main - Print prints all possible different combinations of two digits
 *
 * Return: 0
*/
int main(void)
{
	int d;
	int u;

	for (d = 48; d <= 57; d++)
	{
		for (u=d+1; u<=57; u++)
		{
			putchar(d);
			putchar(u);
			if (d < 57)
			{
				putchar(44);
				putchar(32);
			}
		}
	}
	putchar('\n');
	return (0);
}
