#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data (n) of dlistint_t
 * @head: head of the list
 * Return: the sum of the data
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;/*Add the value of n from the current node to sum*/
		head = head->next; /*Move to the next node*/
	}
	return (sum);
}
