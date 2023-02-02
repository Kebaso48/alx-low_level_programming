#include "lists.h"

/**
 * sum_listint - sums all data of a listint_t linked list
 * @head: pointer to the head of listint_t list
 * Return: 0 if the list is empty, otherwise the sum of the list
 */
int sum_listint(listint_t *head)
{
	int add = 0;

	while (head)
	{
		add += head->n;
		head = head->next;
	}
	
	return (add);
}
