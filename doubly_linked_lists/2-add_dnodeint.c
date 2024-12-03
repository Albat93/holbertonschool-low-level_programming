#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list
 * @head: head of the list
 * @n: number of the list
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = (dlistint_t *)malloc(sizeof(dlistint_t));

	if (head == NULL || new_node == NULL)
		return (0);

	new_node->n = n;
	new_node->next = *head;
	new_node->prev = NULL;


	if (*head != NULL)
		(*head)->prev = new_node;


	*head = new_node;

	return (new_node);

}
