#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"


/**
 * add_node - entry point
 * @head: head of the linked list
 * @str: data to be added
 * Description: function that adds a new node  atthe begenningof a list_t list
 * Return: the address of the new element or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t *));

	if (new_node == NULL)
		return (NULL);
	new_node->str = strdup(str);
	new_node->len = strlen(str);
	new_node->next = *head;
	*head = new_node;
	return (*head);
}
