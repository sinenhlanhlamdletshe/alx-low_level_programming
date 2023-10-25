#include "lists.h"

/**
 * free_listint_safe - frees a listint_t list
 * @h: pointer to the first node in the list
 * Return: size of the list that was free'd
 */
size_t free_listint_safe(listint_t **h)
{
	size_t y = 0;
	int x;
	listint_t *emp;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		x = *h - (*h)->next;
		if (x > 0)
		{
			emp = (*h)->next;
			free(*h);
			*h = emp;
			y++;
		}
		else
		{
			free(*h);
			*h = NULL;
			y++;
			break;
		}
	}

	*h = NULL;
	return (y);
}
