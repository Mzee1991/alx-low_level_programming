#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint_end - function that adds a new node at the end
 * @head: Pointer to a pointer of a struct constant
 * @n: int constant
 *
 * Return: The number of nodes
**/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ptr = *head, *tmp;

	tmp = malloc(sizeof(listint_t));
	tmp->n = n;
	tmp->next = NULL;

	while (ptr->next != NULL)
	{
		ptr = ptr->next;
	}
	ptr->next = tmp;
}
