#include <stdio.h>
#include "lists.h"

/**
* print_listint - A function that prints all the elements of a listint_t list.
* @h: A constant variable of type list_t.
*
* Return: The number of nodes (i).
*
*/
size_t print_listint(const listint_t *h)
{
unsigned int i = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
	i++;
	}
return (i);
}
