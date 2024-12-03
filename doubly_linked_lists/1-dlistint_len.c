#include "lists.h"

/**
 * dlistint_len - function to count number of element of a list
 * @h: pointer to the structure
 * Return: number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	int count = 0;

	if (h == NULL)
		return (count);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
