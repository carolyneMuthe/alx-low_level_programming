#include "lists.h"

/**
 * free_listint - Frees a listint_t list.
 * @head: The head of the list to be freed.
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
