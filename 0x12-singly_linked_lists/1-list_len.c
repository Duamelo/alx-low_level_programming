#include <stdio.h>
#include <stdlib.h>
#include "lists.h"


/**
 * list_len - entry point
 * @h: head of the linked list
 * Description: function that returns the number of elements in a linked list
 * Return: size of the linked list
 */
size_t list_len(const list_t *h)
{
	size_t size = 0;
	const list_t *temp;

	if (h == NULL)
		return (size);
	temp = h;

	while (temp != NULL)
	{
		size++;
		temp = temp->next;
	}
	return (size);
}
