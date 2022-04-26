#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
* pop_listint - Function that deletes the head node.
* @head: A constant variable of type list_t.
*
* Return: Head node's data (n).
*
*/
int pop_listint(listint_t **head)
{
int data = 0;
listint_t *node = NULL;

	if (*head == NULL)
		return (data);
	node = (*head)->next;
	data = (*head)->n;
	free(*head);
	*head = node;
return (data);
}
