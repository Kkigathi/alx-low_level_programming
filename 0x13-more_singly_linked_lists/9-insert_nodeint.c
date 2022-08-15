#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: head of the list
 * @idx: place to insert node
 * @n: value of the inserted node
 * Return: pointer to head of list
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *hold, *current;

	current = *head;
	hold = malloc(sizeof(listint_t));

	if (hold == NULL)
		return (NULL);
	hold->n = n;

	if (idx == 0)
	{
		hold->next = current;
		*head = hold;
		return (hold);
	}
	for (i = 0; i < (idx - 1); i++)
	{
		if (current == NULL || current->next == NULL)
			return (NULL);
		current = current->next;
	}
	hold->next = current->next;
	current->next = hold;
	return (hold);

}
