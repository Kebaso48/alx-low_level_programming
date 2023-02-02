#include "lists.h"
#include <stdio.h>

size_t print_listint_safe(const listint_t *head);
size_t loop_listint_length(const listint_t *head);

/**
 * print_listint_safe - prints a listint_t linked list
 * @head: pointer to head of listint_t list
 * Return: status 98 if program fails, otherwise linked list
 * with unique nodes
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t node, i = 0;

	node = loop_listint_length(head);

	if (node == 0)
	{
		for (; head != NULL; node++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}

	else
	{
		for (i = 0; i < node; i++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("[%p] %d\n", (void *)head, head->n);
	}
	return (node);
}

/**
 * loop_listint_length - counts unique nodes in a looped list
 * @head: pointer to head of list to check
 * Return: 0 if not looped
 */
size_t loop_listint_length(const listint_t *head)
{
	const listint_t *i, *j;
	size_t node = 1;

	if (head == NULL || head->next == NULL)
		exit(98);
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
