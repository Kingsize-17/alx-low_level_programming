#include "lists.h"

/**
 * dlistint_len - The function that returns the number of elements in
 * a double linked list
 *
 * @h: The head of the list
 * Return: The number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t nbr_nodes = 0;
	const dlistint_t *current = h;

	while (current != NULL)
	{
		current = current->next;
		nbr_nodes++;
	}

	return (nbr_nodes);
}
