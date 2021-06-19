#include <stdlib.h>
#include <stdio.h>
/**
 * main - Print all possible combinations of two two-digit numbers
 *
 * Return: 0
*/
int main(void)
{
	int d;
	int u;

	for (d = 48; d <= 56; d++)
	{
		putchar(d);
		putchar(d);
		putchar(32);
		for (u = 48; u <= 57; u++)
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
