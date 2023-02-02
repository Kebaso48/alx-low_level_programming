#include "lists.h"

/**
 * pop_listint - deletes head node of a listint_t list
 * @head: pointer to address of head of listint_t list
 * Return: 0 if linked list is empty, otherwise the head node deleted
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int result;

	if (*head == NULL)
		return (0);

	temp = *head;
	result = (*head)->n;
	*head = (*head)->next;

	free(temp);

	return (result);
}
