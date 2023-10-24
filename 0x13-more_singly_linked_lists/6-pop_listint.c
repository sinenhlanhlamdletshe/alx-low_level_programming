#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t list
 * @head: pointer to the list
 * Return: head node's data or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *emp;
	int digit;

	if (!head || !*head)
		return (0);

	digit = (*head)->n;
	emp = (*head)->next;
	free(*head);
	*head = emp;

	return (digit);
}
