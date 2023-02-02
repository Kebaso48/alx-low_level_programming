#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the ode at index of a list
 * @head: pointer to the addres of the head of the list
 * @index: the index of the node to be deleted
 * Return: 1 on success and -1 if it fails
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *rep = *head;
	unsigned int pos;

	if (rep == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(rep);
		return (1);
	}

	for (pos = 0; pos < (index - 1); pos++)
	{
		if (rep->next == NULL)
			return (-1);

		rep = rep->next;
	}

	temp = rep->next;
	rep->next = temp->next;
	free(temp);
	return (1);
}
