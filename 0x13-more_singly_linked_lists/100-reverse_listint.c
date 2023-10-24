#include "lists.h"

/**
 * reverse_listint - reverses a listint_t list
 * @head: pointer to the first element in the list
 * Return: pointer to the first node of reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *emp = NULL;
	listint_t *new_emp = NULL;

	while (*head)
	{
		new_emp = (*head)->next;
		(*head)->next = emp;
		emp = *head;
		*head = new_emp;
	}
	*head = emp;
	return (*head);
}
