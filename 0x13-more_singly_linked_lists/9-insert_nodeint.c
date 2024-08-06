#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node at a given position.
 * @head: Pointer to the pointer of the head of the list.
 * @idx: Index where the new node should be added (starting at 0).
 * @n: Integer data to be included in the new node.
 *
 * Return: Address of the new node, or NULL if it failed or it is not possible
 * to add the new node at index idx.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *new_node;
	listint_t *current = *head;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	for (i = 0; current != NULL && i < idx - 1; i++)
	{
		current = current->next;
	}
	if (current == NULL || (current->next == NULL && idx - 1 > i))
	{
		free(new_node);
		return (NULL);
	}
	new_node->next = current->next;
	current->next = new_node;

	return (new_node);
}
