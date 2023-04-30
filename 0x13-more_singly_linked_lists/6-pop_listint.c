#include "lists.h"

/**
 * pop_listint - deletes the head node of a linked list
 * @head: double pointer to the first element in the linked list
 *
 * Return: the data inside the element that was deleted,
 * or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int data = 0;

	if (head == NULL || *head == NULL) {
		return 0;
	}

	temp = *head;
	data = temp->n;
	*head = (*head)->next;

	free(temp);

	return data;
}
