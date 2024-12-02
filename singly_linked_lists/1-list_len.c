#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list_t list
 * @h: pointer to structure
 * Return: the number of elements
 */
size_t list_len(const list_t *h)
{
	size_t number_node = 0;

	while (h != NULL)
	{
		h = h->next;
		number_node++;
	}
	return (number_node);
}
