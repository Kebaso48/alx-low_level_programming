#include "lists.h"

/**
 * get_nodeint_at_index - returns nth node of a listint_t list
 * @head: pointer to the head node of listint_t list
 * @index: the node to be located
 * Return: NULL if node does not exist, otherwise the located node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int node;

	for (node = 0; node < index; node++)
	{
		if (head == NULL)
			return (NULL);

		head = head->next;
	}
	return (head);
}
