#include "lists.h"

/**
 * pop_listint - deletes the head of a linked list
 * @head: pointer to the first element in the list
 *
 * Return: the data inside the elements that was deleted,
 * or 0 is the list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	if (!head || *head)
		return (0);
	num = (*head)->n;
	temp = (*head)->next;
	*head = temp;
	return (num);
}
