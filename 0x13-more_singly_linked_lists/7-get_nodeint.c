#include "lists.h"

/**
 * get_nodeint_at_index - this returns node at a certain index in a linked list
 * @head: this is the first node in the linked list
 * @index: the index of the node to return
 *
 * Return: returns pointer to the node we are looking for, or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int a = 0;
	listint_t *temp = head;

	while (temp && a < index)
	{
		temp = temp->next;
		a++;
	}

	return (temp ? temp : NULL);
}
