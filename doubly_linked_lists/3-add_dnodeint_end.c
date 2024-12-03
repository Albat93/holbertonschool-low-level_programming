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
	dlistint_t *last_node = *head;

	newnode = malloc(sizeof(dlistint_t));

	if (!newnode)
		return (NULL);

	newnode->n = n;
	newnode->next = NULL;

	if (*head == NULL)
	{
		*head = newnode;
		newnode->prev = NULL;
		return (newnode);
	}
	while (last_node->next != NULL)
		last_node = last_node->next;

	last_node->next = newnode;
	newnode->prev = last_node->next;

	return (newnode);
}
