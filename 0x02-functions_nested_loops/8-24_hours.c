#include "holberton.h"

/**
 * jack_bauer - Print every minute from 00:00 to 23:59
 *
 * Description: Print every minute of the day of Jack Bauer
 *
 * Return: void
 */


void jack_bauer(void)
{
	int a, b, p, q;

	for (a = '0'; a <= '2'; a++)
	{
		for (b = '0'; b <= '3'; b++)
		{
			for (p = '0'; p <= '5'; p++)
			{
				for (q = '0'; q <= '9'; q++)
				{
					if (a >= '2' && b >= '4')
					break;
					_putchar(a);
					_putchar(b);
					_putchar(58);
					_putchar(p);
					_putchar(q);
					_putchar('\n');
				}
			}
		}
	}
}
