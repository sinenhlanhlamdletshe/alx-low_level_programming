#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node in at index of a listint_t list
 * @head: pointer to the first element in the list
 * @index: index of the node to delete
 * Return: 1 (Success) or -1 (Fail)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *emp = *head;
	listint_t *mal = NULL;
	unsigned int x = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(emp);
		return (1);
	}
	while (x < index - 1)
	{
		if (!emp || !(emp->next))
			return (-1);
		emp = emp->next;
		x++;
	}

	mal = emp->next;
	emp->next = mal->next;
	free(mal);

	return (1);
}
