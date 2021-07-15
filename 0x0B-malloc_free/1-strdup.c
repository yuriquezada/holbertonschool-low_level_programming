#include "holberton.h"
#include <stdlib.h>
/**
 * *_strdup - Return a pointer to a new string
 * @str: String
 * Return: pointer of the duplicated string or NULL
**/

char *_strdup(char *str)
{
	char *p;
	int i = 0;

	if (str == NULL)
		return (NULL);
	p = malloc(sizeof(char) * i);
	for (; str[i] != '\0'; i++)
		p[i] = str[i];
	return (p);
}
