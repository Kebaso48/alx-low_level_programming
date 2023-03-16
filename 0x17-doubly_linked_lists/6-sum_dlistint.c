#include "lists.h"
/**
 * sum_dlistint - sums all data of a dlistint_t list
 * @head: the head of the list
 * Return: sum of the data
 */
int sum_dlistint(dlistint_t *head)
{
	int add = 0;

	while (head)
	{
		add += head->n;
		head = head->next;
	}
	return (add);
}
