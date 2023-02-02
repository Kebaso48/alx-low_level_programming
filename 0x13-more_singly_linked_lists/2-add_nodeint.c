#include "lists.h"
#include <stdio.h>

/**
 * add_nodeint - adds a new node at the beginning of a list
 * @head: pointer to address of head of listint_t list
 * @n: integer contained in the new node
 * Return: NULL if function fails, otherwise address of new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;

	*head = new;

	return (new);
}
