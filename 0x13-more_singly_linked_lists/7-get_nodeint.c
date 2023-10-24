#include "lists.h"

/**
 * get_nodeint_at_index - returns nth nod of a listin_t linked list
 * @head: pointer to first element in the linked list
 * @index: node to return
 * Return: pointer to index or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int x = 0;
	listint_t *emp = head;

	while (emp && x < index)
	{
		emp = emp->next;
		x++;
	}

	return (emp ? emp : NULL);
}
