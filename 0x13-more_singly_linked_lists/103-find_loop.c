#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list
 * @head: linked list to search for
 *
 * Return: address of the node where the loop starts, or NULL
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slow = head;  /* initialize slow pointer */
	listint_t *fast = head;  /* initialize fast pointer */

	if (!head)
		return (NULL);  /* if head is NULL, return NULL */

	while (slow && fast && fast->next)
	{
		fast = fast->next->next;  /* move fast pointer two steps */
		slow = slow->next;  /* move slow pointer one step */
		if (fast == slow)  /* if they meet, there is a loop */
		{
			slow = head;  /* move slow to the beginning of the list */
			while (slow != fast)  /* move both pointers one step at a time */
			{
				slow = slow->next;
				fast = fast->next;
			}
			return (fast);  /* return the starting node of the loop */
		}
	}

	return (NULL);  /* no loop found, return NULL */
}
