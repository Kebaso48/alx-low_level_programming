#include "lists.h"

/**
 * list_len - checks for number of elements in a linked list
 * @h: the linked list
 * Return: the number of rlrments in the linked list
 */
size_t list_len(const list_t *h)
{
	size_t number = 0;

	while (h)
	{
		number++;
		h = h->next;
	}
	return (number);
}
