#include "lists.h"
#include <stdio.h>

/**
 * listint_len - prints number of elements in a linked listint_t list
 * @h: pointer to head of listint_t list
 * Return: number of elements of Listint_t list
 */
size_t listint_len(const listint_t *h)
{
	size_t number = 0;

	while (h)
	{
		number++;
		h = h->next;
	}
	return (number);
}
