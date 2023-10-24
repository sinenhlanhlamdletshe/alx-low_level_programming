#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a listint_t list
 * @head: head pointer to the first node in the list
 * @n: data to insert into that new node
 * Return: pointer to the new node or NULL (failure)
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ven;

	ven = malloc(sizeof(listint_t));
	if (!ven)
		return (NULL);

	ven->n = n;
	ven->next = *head;
	*head = ven;

	return (ven);
}
