#include <stdlib.h>
#include <stdio.h>
/**
 * main - Print all possible combinations of two two-digit numbers
 *
 * Return: 0
*/
int main(void)
{
	int a, b, p, q;

	for (a = 48; a <= 57; a++)
	{
		for (b = 48; b <= 57; b++)
		{
			for (p = 48; p <= 57; p++)
			{
				for (q = 48; q <= 57; q++)
				{
					if ((a >= p) && (b >= q) && (b < 57))
					{
						p = a;
						q = b + 1;
					}
					if ((a >= p) && (b >= q) && (b == 57))
					{
						p = a + 1;
						q = b - 9;
					}
					if (!((a == 57) && (b >= 57)))
					{
						putchar(a);
						putchar(b);
						putchar(32);
						putchar(p);
						putchar(q);
					}
					if (!((a == 57) && (b >= 57)) && !((a == 57) && (b == 56)))
					{
						putchar(44);
						putchar(32);
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
