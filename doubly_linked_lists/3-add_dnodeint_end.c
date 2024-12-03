#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list.
 * @head: head of the list
 * @n: number of the list
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newnode;
	dlistint_t *last_node;

	newnode = malloc(sizeof(dlistint_t));

	if (!newnode)
		return (NULL);

	newnode->n = n;
	newnode->next = NULL;

	last_node = *head;

	if (last_node != NULL)
	{
		while (last_node->next != NULL)
			last_node = last_node->next;
		last_node->next = newnode;
	}
	else
	{
		*head = newnode;
	}

	newnode->prev = last_node;

	return (newnode);
}
