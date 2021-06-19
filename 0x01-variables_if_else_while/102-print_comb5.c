#include <stdlib.h>
#include <stdio.h>
/**
 * main - Print all possible combinations of two two-digit numbers
 *
 * Return: 0
*/
int main(void)
{
	int a;
	int b;
	int p;
	int q;

	for (a = 48; a <= 57; a++)
	{
		for (b = 48; b <= 56; b++)
		{
			for (p = 48; p <= 57; p++)
			{
				for (q = 48; q <= 57; q++)
				{
					if ((a >= p) && (b >= q))
					{
 						p = a;
						q = b + 1;
					}
 					putchar(a);
					putchar(b);
					putchar(32);
					putchar(p);
					putchar(q);
					if ((b < 56) && (p < 58))
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
