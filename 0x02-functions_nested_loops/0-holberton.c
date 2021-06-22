#include <unistd.h>

/**
 * main - Print Holberton word
 *
 * Return: 0
*/
int main(void)
{
	char p[] = "Holberton";
	for (int i = 0; i < 9; i++)
		_putchar(p[i]);
	_putchar('\n');
	return (0);
}
