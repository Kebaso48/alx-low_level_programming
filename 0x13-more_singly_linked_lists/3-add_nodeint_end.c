#include "lists.h"
#include <stdio.h>

/**
 * add_nodeint_end - adds new node at end of listint_t list
 * @head: pointer to the address of head of listint_t list
 * @n: integer in the new node
 * Return: NULL if function fails, otherwise address to new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *final;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
		*head = new;

	else
	{
		final = *head;
		while (final->next != NULL)
			final = final->next;
		final->next = new;
	}
	return (*head);
}
