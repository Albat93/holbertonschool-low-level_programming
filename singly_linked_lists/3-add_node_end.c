#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: head of the list
 * @str: string to add at the end
 * Return: a list_t value
 */
list_t *add_node_end(list_t **head, const char *str)
{
		list_t *newnode;
	unsigned int len = 0;
	list_t *last_node = *head;

	while (str[len])
		len++;

	newnode = malloc(sizeof(list_t));

	if (!newnode)
		return (NULL);

/*set value for new node*/
	newnode->str = strdup(str);
	newnode->len = len;
	newnode->next = NULL;
/*if list is empty, make new node the head of the list*/
	if (*head == NULL)
	{
		*head = newnode;
		return (newnode);
	}
	while (last_node->next != NULL) /*traverse to the last node*/
		last_node = last_node->next;
/*append the new node to the end*/
	last_node->next = newnode;

	return (newnode); /*return new node added at the end*/
}
