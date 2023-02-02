#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer to the head of a list
 * @idx: index of list where the new node should be added
 * @n: integer contained in the new node;
 * Return: NULL if function fails, otherwise address of new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *rep = *head;
	unsigned int pos;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;

	if (idx == 0)
	{
		new->next = rep;
		*head = new;
		return (new);
	}

	for (pos = 0; pos < (idx - 1); pos++)
	{
		if (rep == NULL || rep->next == NULL)
			return (NULL);

		rep = rep->next;
	}

	new->next = rep->next;
	rep->next = new;

	return (new);
}
