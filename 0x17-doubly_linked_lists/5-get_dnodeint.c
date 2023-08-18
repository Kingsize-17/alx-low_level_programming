#include "lists.h"

/**
 * get_dnodeint_at_index - Function returning the nth node of a dlistint_t linked list.
 * @head: The pointer to head of the list
 * @index: The index of the node to search for, starting from 0
 * Return: Return nothing node or null
 **/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current;

	if (head == NULL)
		return (0);

	current = head;

	while (index != 0)
	{
		current = current->next;
		index--;
		if (current == NULL)
			return (0); /*Out of range*/
	}

	return (current);
}
