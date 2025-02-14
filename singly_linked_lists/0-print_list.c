#include "lists.h"
#include <stdio.h>
#include <string.h>
/**
 * print_list - prints all the elements of a list_t list
 * @h: pointer to structure
 * Return: the number of nodes, if str is null return (nil)
 */

size_t print_list(const list_t *h)
{
	size_t number_node = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);

		h = h->next;
		number_node++;
	}
	return (number_node);
}
