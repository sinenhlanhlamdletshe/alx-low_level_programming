#include "lists.h"

/**
 * free_listint - frees a listin_t list
 * @head: listint_t list to be freed
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *emp;

	while (head)
	{
		emp = head->next;
		free(head);
		head = emp;
	}
}
