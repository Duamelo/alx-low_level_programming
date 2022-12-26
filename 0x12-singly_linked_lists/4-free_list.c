#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * free_list - entry point
 * @head: the head of the list
 * Description: function that frees a list_t list
 * Return: nothing
 */
void free_list(list_t *head)
{
	list_t *temp, *suiv;

	temp = head;
	while (temp != NULL)
	{
		suiv = temp->next;
		free(temp);
		temp = suiv;
		temp = head;
	}
	free(head);
}
