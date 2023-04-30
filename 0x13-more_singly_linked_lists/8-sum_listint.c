#include "lists.h"

/**
 * sum_listint - calculates the sum of all the data in a listint_t list
 * @head: pointer to the first element in the linked list
 *
 * Return: the sum of all the integers in the linked list
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	for (; head != NULL; head = head->next)
		sum += head->n;

	return (sum);
}
