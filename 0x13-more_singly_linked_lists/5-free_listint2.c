#include "lists.h"

/**
 * free_listint2 - frees a linked list
 * @head: head of a list.
 *
 * Return: no return.
 */
void free_listint2(listint_t **head)
{
	listint_t *y;
	listint_t *c;

	if (head != NULL)
	{
		c = *head;
		while ((y = c) != NULL)
		{
			c = c->next;
			free(y);
		}
		*head = NULL;
	}
}
