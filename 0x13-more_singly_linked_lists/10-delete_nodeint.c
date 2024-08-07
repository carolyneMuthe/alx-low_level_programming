#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes the node at index
 * * index of a listint_t linked list.
 * @head: Pointer to the pointer of the head of the list.
 * @index: Index of the node that should be deleted (starting at 0).
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *current, *temp;


	if (head == NULL || *head == NULL)
		return (-1);
	current = *head;
	if (index == 0)
	{
		*head = current->next;
		free(current);
		return (1);
	}
	for (i = 0; current != NULL && i < index - 1; i++)
	{
		current = current->next;
	}
	if (current == NULL || current->next == NULL)
		return (-1);
	temp = current->next->next;
	free(current->next);
	current->next = temp;

	return (1);
}
