#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints all elemenys of a listint_t list
 * @h: pointer to head of listint_t list
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t node = 0;

	while (h)
	{
		node++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (node);
}
