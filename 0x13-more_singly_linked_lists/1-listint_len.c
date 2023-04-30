#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked list
 * @h: pointer to the head of a linked list of type listint_t
 *
 * Return: the number of nodes in the list
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	for (const listint_t *node = h; node; node = node->next)
	{
		count++;
	}

	return count;
}
