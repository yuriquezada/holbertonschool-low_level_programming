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
	unsigned int i = 0, len = 0;

	if (str == NULL)
		return (NULL);
	for (; str[i] != '\0'; i++)
		len++;
	i = 0;
	p = malloc(sizeof(*str) * len);
	for (; str[i] != '\0'; i++)
		p[i] = str[i];
	return (p);
}
