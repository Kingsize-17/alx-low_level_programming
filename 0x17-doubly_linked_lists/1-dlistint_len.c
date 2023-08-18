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
	int count;

	count = 0;

	if (a == NULL)
		return (count);

	while (a->prev != NULL)
		a = a->prev;

	while (a != NULL)
	{
		count++;
		a = a->next;
	}

	return (count);
}
