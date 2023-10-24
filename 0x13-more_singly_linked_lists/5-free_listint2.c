#include "lists.h"

/**
 * free_listint2 - frees a listint_t list
 * @head: pointer to the list to be freed
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *emp;

	if (head == NULL)
		return;

	while (*head)
	{
		emp = (*head)->next;
		free(*head);
		*head = emp;
	}

	*head = NULL;
}
