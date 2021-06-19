  
#include <stdlib.h>
#include <stdio.h>
/**
 * main - Print all possible different combinations of three digits
 *
 * Return: 0
*/
int main(void)
{
	int c;
	int d;
	int u;

	for (c = 48; c <= 55; c++)
	{
		for (d = d + 1; d <= 56; d++)
		{
			for (u = d + 1; u <= 57; u++)
			{
				putchar(c);
				putchar(d);
				putchar(u);
				if (c < 55)
				{
					putchar(44);
					putchar(32);
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
