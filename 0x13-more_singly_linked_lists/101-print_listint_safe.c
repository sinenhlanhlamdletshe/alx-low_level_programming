#include "lists.h"

/**
 * looped_listint_len - Counts the number of unique nodes in looped
 * @head: A pointer to the head of the listint_t to check.
 * Return: number of unique nodes or 0 (not looped)
 */
size_t looped_listint_len(const listint_t *head)
{
	const listint_t *mel, *daf;
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	mel = head->next;
	daf = (head->next)->next;

	while (daf)
	{
		if (mel == daf)
		{
			mel = head;
			while (mel != daf)
			{
				nodes++;
				mel = mel->next;
				daf = daf->next;
			}
			mel = mel->next;
			while (mel != daf)
			{
				nodes++;
				mel = mel->next;
			}
			return (nodes);
		}
		mel = mel->next;
		daf = (daf->next)->next;
	}
	return (0);
}

/**
 * print_listint_safe - Prints a listint_t list
 * @head: A pointer to the listint_t list.
 * Return: The number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nodes, x = 0;

	nodes = looped_listint_len(head);

	if (nodes == 0)
	{
		for (; head != NULL; nodes++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}

	else
	{
		for (x = 0; x < nodes; x++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}
	return (nodes);
}
