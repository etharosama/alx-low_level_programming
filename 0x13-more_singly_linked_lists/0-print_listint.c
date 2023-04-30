#include "lists.h"

/**
 * print_listint - prints all the elements of a linked list
 * @h: pointer to the head of a linked list of type listint_t
 *
 * Return: the number of nodes in the list
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	for (const listint_t *node = h; node; node = node->next)
	{
		printf("%d\n", node->n);
		count++;
	}

	return count;
}
