#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: head of the list_t list
 * @str: new string to add into the node
 * Return: the address of the head, or NULL if it fails
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *ven;
	size_t x;

	ven = malloc(sizeof(list_t));
	if (ven == NULL)
		return (NULL);

	ven->str = strdup(str);

	for (x = 0; str[x]; x++);

	ven->len = x;
	ven->next = *head;
	*head = ven;

	return (*head);
}
