#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: head of the list
 * @str: string to add at the end
 * Return: a list_t value
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));
	list_t *last_node = *head;

	if (new_node == NULL) /*if malloc failed*/
		return (0);

/*set value for new node*/
	new_node->str = strdup(str);
	new_node->len = strlen(str);
	new_node->next = NULL;
/*if list is empty, make new node the head of the list*/
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	while (last_node->next != NULL) /*traverse to the last node*/
		last_node = last_node->next;
/*append the new node to the end*/
	last_node->next = new_node;

	return (new_node); /*return new node added at the end*/
}
