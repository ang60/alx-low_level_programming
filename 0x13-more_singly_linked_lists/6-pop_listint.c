#include "lists.h"

/**
 * pop_listint - deletes the head node of
 * a linked list
 * @head: head of a list.
 *
 * Return: head node's data.
 */
int pop_listint(listint_t **head)
{
	int pnode;
	listint_t *k;
	listint_t *c;

	if (*head == NULL)
		return (0);

	c = *head;

	pnode = c->n;

	k = c->next;

	free(c);

	*head = k;

	return (pnode);
}
