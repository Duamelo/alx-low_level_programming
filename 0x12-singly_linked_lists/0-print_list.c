#include <stdio.h>
#include <stdlib.h>
#include "lists.h"


/**
 * print_list - entry point
 * @h: head of linked list
 *
 * Description: function that prints all the elements of a list_t list
 * Return: the number of node
 */
size_t print_list(const list_t *h)
{
	size_t size = 0;
	const list_t *temp;

	if (h == NULL)
		exit(0);
	temp = h;

	while (temp != NULL)
	{
		if (temp->str == NULL)
		{
			printf("[0] (nil)\n");
			size++;
		}
		else
		{
			printf("[%d] %s\n", temp->len,  temp->str);
			size++;
		}
		temp = temp->next;
	}
	return (size);
}
