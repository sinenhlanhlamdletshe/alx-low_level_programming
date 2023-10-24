#include "lists.h"

/**
 * add_nodeint_end - adds a node at the end of a listin_t list
 * @head: pointer to the first element in the list
 * @n: data to insert in the new element
 * Return: pointer to the new node or NULL (failure)
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ven;
	listint_t *emp = *head;

	ven = malloc(sizeof(listint_t));
	if (!ven)
		return (NULL);

	ven->n = n;
	ven->next = NULL;

	if (*head == NULL)
	{
		*head = ven;
		return (ven);
	}

	while (emp->next)
		emp = emp->next;
	emp->next = ven;

	return (ven);
}
