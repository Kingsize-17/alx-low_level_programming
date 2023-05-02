#include "lists.h"

/**
 * find_listint_loop - This finds the loop in a linked list
 * @head: The linked list to search for
 *
 * Return: Return the address of the node where the loop starts, or NULL
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *gentle = head;
	listint_t *hard = head;

	if (!head)
		return (NULL);

	while (gentle && hard && hard->next)
	{
		hard = hard->next->next;
		gentle = gentle->next;
		if (hard == gentle)
		{
			gentle = head;
			while (gentle != hard)
			{
				gentle = gentle->next;
				hard = hard->next;
			}
			return (hard);
		}
	}

	return (NULL);
}
