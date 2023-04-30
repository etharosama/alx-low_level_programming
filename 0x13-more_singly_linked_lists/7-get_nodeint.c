#include "lists.h"

/**
 * get_nodeint_at_index - returns the node at a certain index in a linked list
 * @head: pointer to the first node in the linked list
 * @index: index of the node to return
 *
 * Return: pointer to the node at the specified index, or NULL if it doesn't exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
    unsigned int i;
    listint_t *temp;

    for (i = 0, temp = head; temp != NULL && i < index; i++, temp = temp->next)
        ;

    return (temp != NULL ? temp : NULL);
}
