#include "lists.h"
#include <stdio.h>

/**
 * print_list - print all the elements of a list_t list
 * @h: singly linked list to print
 *
 * Return: number of nodes in the list
 */
size_t print_list(const list_t *h)
{
	const list_t *tmp;
	unsigned int i;

	tmp = h;
	for (i = 0; tmp; i++)
	{
		printf("[%u] %s\n", tmp->len, tmp->str);
		tmp = tmp->next;
	}
	return (i);
}
