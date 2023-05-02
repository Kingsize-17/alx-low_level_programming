#include "lists.h"

/**
 * sum_listint - calculates all the sum of the data in a listint_t list
 * @head: this is the first node in the linked list
 *
 * Return: returns resulting sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}
