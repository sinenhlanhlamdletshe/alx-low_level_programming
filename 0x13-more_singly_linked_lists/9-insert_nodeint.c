#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer to the first node in the list
 * @idx: where the new node is added
 * @n: data to insert into the new node
 * Return: pointer to the new node or NULL (failure)
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int x;
	listint_t *ven;
	listint_t *emp = *head;

	ven = malloc(sizeof(listint_t));
	if (!ven || !head)
	return (NULL);

	ven->n = n;
	ven->next = NULL;

	if (idx == 0)
	{
		ven->next = *head;
		*head = ven;
		return (ven);
	}

	for (x = 0; emp && x < idx; x++)
	{
		if (x == idx - 1)
		{
			ven->next = emp->next;
			emp->next = ven;
			return (ven);
		}
	else
		emp = emp->next;
	}

	return (NULL);
}
