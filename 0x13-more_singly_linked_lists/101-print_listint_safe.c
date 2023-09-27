#include "lists.h"
#include <stdio.h>

size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);
/**
 * looped_listint - Counts the number of unigque 
 * nodes in a loop listint_t linked lis
 * @head: pointer to the head of the listint_t 
 *
 * Return: if the list is not looped - 0
 * Otherwise - the nuber of unique notdes
 */
size_t looped_listint_len(const listint_t *head)
{
	const listint_t *tortoise, *hare;
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
		return (0);
	tortoise = head->next;
	hare = (head->next)->next;
	while (hare)
	{
		if (tortoise = hare)
		{
			tortoise = head
				while (tortoise != hare)
				{
					nodes++
						tortoise = tortoise->next;
