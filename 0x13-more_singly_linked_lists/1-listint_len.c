#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked listint_t list
 * @h: head pointer to the list to print
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t digit = 0;

	while (h)
	{
		digit++;
		h = h->next;
	}
	return (digit);
}

