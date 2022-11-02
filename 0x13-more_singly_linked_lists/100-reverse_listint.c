#include "lists.h"

/**
 * reverse_listint - Reverse a linked list
 * @head: Head of list
 * Return: Pointer to the first node of reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL, *next = NULL;

	if (head)
	{
		while (*head)
		{
			next = *head;
			*head = (*head)->next;
			next->next = prev;
			prev = next;
		}

		*head = prev;
		return (*head);
	}
	return (NULL);
}
