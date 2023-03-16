#include "lists.h"

/**
 * get_dnodeint_at_index - returns nth node of dlistint_t list
 * @head: head of dlistint_t list
 * @index: index of node
 * Return: NULL if node does not exist, otherwise address of node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	for (; index != 0; index--)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}
	return (head);
}
