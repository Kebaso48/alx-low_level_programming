#include "lists.h"
#include <string.h>

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: pointer to head of the list
 * @str: the string to be added
 * Return: NULL if function fails, otherwise an address to new element
 */
list_t *add_node(list_t **head, const char *str)
{
	int length;
	char *copy;
	list_t *n;

	n = malloc(sizeof(list_t));
	if (n == NULL)
		return (NULL);

	copy = strdup(str);
	if (copy == NULL)
	{
		free(n);
		return (NULL);
	}

	for (length = 0; str[length];)
		length++;

	n->str = copy;
	n->len = length;
	n->next = *head;

	*head = n;

	return (n);
}
