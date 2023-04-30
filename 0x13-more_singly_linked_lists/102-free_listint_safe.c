#include "lists.h"

/**
 * free_listint_safe - frees a linked list
 * @h: pointer to the first node in the linked list
 *
 * Return: number of elements in the freed list
 */
size_t free_listint_safe(listint_t **h)
{
	size_t len = 0;
	listint_t *current, *tmp;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		current = *h;
		*h = (*h)->next;
		current->next = NULL;

		/* check if the node has been freed already */
		if (current < current->next)
		{
			free(current);
			len++;
		}
		else
		{
			/* loop detected, stop freeing */
			*h = NULL;
			len++;
			break;
		}
	}

	return (len);
}
