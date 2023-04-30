#include "lists.h"

/**
 * print_listint_safe - prints a linked list safely (i.e., can handle loops)
 * @head: pointer to the first node of the list
 *
 * Return: number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *slow = head, *fast = head;
	size_t count = 0;

	while (slow != NULL && fast != NULL && fast->next != NULL)
	{
		printf("[%p] %d\n", (void *)slow, slow->n);

		slow = slow->next;
		fast = fast->next->next;

		/* check if there's a loop */
		if (slow == fast)
		{
			/* print the node where the loop starts */
			printf("-> [%p] %d\n", (void *)slow, slow->n);

			/* count the remaining nodes in the loop */
			do {
				count++;
				fast = fast->next;
			} while (slow != fast);

			break;
		}

		count++;
	}

	/* print remaining nodes if there's no loop */
	while (slow != NULL)
	{
		printf("[%p] %d\n", (void *)slow, slow->n);
		slow = slow->next;
		count++;
	}

	return (count);
}
