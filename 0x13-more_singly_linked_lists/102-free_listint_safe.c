#include "lists.h"
#include <stdio.h>

size_t free_listint_safe(listint_t **h);
size_t loop_listint_len(listint_t *head);

/**
 * free_listint_safe - prints a listint_t linked list
 * @h: pointer to address of head of listint_t list
 * Return: status 98 if program fails, otherwise linked list
 * with unique nodes
 */
size_t free_listint_safe(listint_t **h)
{
	size_t node, i = 0;
	listint_t *temp;

	node = loop_listint_len(*h);

	if (node == 0)
	{
		for (; h != NULL && *h != NULL; node++)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
		}
	}

	else
	{
		for (i = 0; i < node; i++)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
		}

		*h = NULL;
	}
	h = NULL;

	return (node);
}

/**
 * loop_listint_len - counts unique nodes in a looped list
 * @head: pointer to head of list to check
 * Return: 0 if not looped
 */
size_t loop_listint_len(listint_t *head)
{
	listint_t *i, *j;
	size_t node = 1;

	if (head == NULL || head->next == NULL)
		return (0);
	i = head->next;
	j = (head->next)->next;

	while (j)
	{
		if (i == j)
		{
			i = head;
			while (i != j)
			{
				node++;
				i = i->next;
				j = j->next;
			}

			i = i->next;
			while (i != j)
			{
				node++;
				i = i->next;
			}
			return (node);
		}

		i = i->next;
		j = (j->next)->next;
	}

	return (0);
}
