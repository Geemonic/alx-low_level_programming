#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all the elements of a linked list
 * @h: the pointer to the list_t list to print
 *
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t c = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%lu] %s\n", c, h->str);

		c++;
		h = h->next;
	}

	return (c);
}

