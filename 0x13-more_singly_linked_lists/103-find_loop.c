#include "lists.h"

/**
 * find_listint_loop - counts unique nodes in a looped list
 * @head: pointer to head of list to check
 * Return: 0 if not looped
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *i, *j;

	if (head == NULL || head->next == NULL)
		return (NULL);

	i = head->next;
	j = (head->next)->next;

	while (j)
	{
		if (i == j)
		{
			i = head;
			while (i != j)
			{
				i = i->next;
				j = j->next;
			}


			return (i);
		}

		i = i->next;
		j = (j->next)->next;
	}

	return (NULL);
}
