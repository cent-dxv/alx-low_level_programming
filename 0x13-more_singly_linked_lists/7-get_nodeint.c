#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
* get_nodeint_at_index - function that returns the nth node of a listint_t linked list.
* @head: A constant variable of type list_t.
* @index: A integer.
*
* Return: A node.
*
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
