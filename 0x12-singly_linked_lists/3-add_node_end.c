#include "lists.h"
#include <string.h>

/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: pointer to the head of the list
 * @str: the string to add at the end
 * Return: NULL if function fails, otherwise address of new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	int length;
	char *same;
	list_t *n, *final;

	n = malloc(sizeof(list_t));
	if (n == NULL)
		return (NULL);

	same = strdup(str);
	if (str == NULL)
	{
		free(n);
		return (NULL);
	}

	for (length = 0; str[length];)
		length++;

	n->str = same;
	n->len = length;
	n->next = NULL;

	if (*head == NULL)
		*head = n;

	else
	{
		final = *head;
		while (final->next != NULL)
			final = final->next;
		final->next = n;
	}

	return (*head);
}
