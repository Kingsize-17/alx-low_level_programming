#include "lists.h"

/**
 * insert_dnodeint_at_index - The funtion that inserts a new node at
 * a given position
 *
 * @h: The ehead of the list
 * @idx: The index of the new node
 * @n: The value of the new node
 * Return: Return the address of the new node, or NULL if it failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *current;
	dlistint_t *new;

	if (h == NULL)
		return (0);

	current = *h;

	while (idx != 0)
	{
		current = current->next;
		idx--;
		if (current == NULL)
			return (NULL);
	}

	new = malloc(sizeof(dlistint_t));

	if (new == NULL)
	{
		free(new);
		return (NULL);
	}

	new->n = n;
	new->next = current;
	new->prev = current->prev;
	if (current->prev != NULL)
		current->prev->next = new;

	/*TODO: Handle special case when idx is 0 and last index*/

	return (current);
}
