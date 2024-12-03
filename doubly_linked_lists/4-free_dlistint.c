#include "lists.h"

/**
 * free_dlistint - free all the list
 *
 * @head: head of the list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head != NULL)
	{
		temp = head;	/*Save the current node*/
		head = head->next; /*Move to the next node*/
		free(temp);	/*Free the current node*/
	}
}
