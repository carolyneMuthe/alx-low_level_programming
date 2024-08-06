#include "lists.h"

/**
 * pop_listint - Deletes the head node of a listint_t linked list
 * and returns the head node's data (n).
 * @head: Double pointer to the head of the list.
 *
 * Return: The data (n) of the head node, or 0 if the list is empty.
 */
int pop_listint(listint_t **head)
{
	listint_t *current_head;
	int n;

	if (head == NULL || *head == NULL)
		return (0);

	current_head = *head;
	n = current_head->n;
	*head = current_head->next;
	free(current_head);

	return (n);
}
