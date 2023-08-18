#include "lists.h"

/**
 * free_dlistint - The funtion that frees a dlistint_t list.
 * @head: The pointer to the head of the list
 * Return: Return nothing
 **/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current;
	dlistint_t *next;

	current = head;

	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}
}
