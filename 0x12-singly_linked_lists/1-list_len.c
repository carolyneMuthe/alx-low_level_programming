#include "lists.h"

/**
 * list_len - Returns the number of elements in a linked list_t list.
 * @h: Pointer to the list_t list.
 *
 * Return: The number of elements in the list.
 */
size_t list_len(const list_t *h)
{
	size_t sum = 0;

	while (h != NULL)
	{
		sum++;
		h = h->next;
	}
	return (sum);
}
