#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: head of the list_t list
 * @str: string to add in the new node
 * Return: address of the head, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *ven, *cmp;
	size_t x;

	ven = malloc(sizeof(list_t));
	if (ven == NULL)
		return (NULL);

	ven->str = strdup(str);

	for (x = 0; str[x]; x++)

	ven->len = x;
	ven->next = NULL;
	cmp = *head;

	if (cmp == NULL)
	{
		*head = ven;
	}
	else
	{
		while (cmp->next != NULL)
			cmp = cmp->next;
		cmp->next = ven;
	}

	return (*head);
}
