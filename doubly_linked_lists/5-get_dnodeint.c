#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list
 * @head: head of the list
 *@index: node to reach
 * Return: the index node of a list, if node doesn't exist return null
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	{
		unsigned int count = 0;

		while (head != NULL)
		{
			/*If the current node is the one at the given index, return it*/
			if (count == index)
				return (head);

			head = head->next;
			count++;
		}
		return (NULL);
	}
}
