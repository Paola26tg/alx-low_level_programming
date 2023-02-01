#include "lists.h"
/**
 * free_listint2 - frees list
 * @head: begin
 */
void free_listint2(listint_t **head)
{
	listint_t *liberty;

	if (!head)
		return;

	while (*head != NULL)
	{
		liberty = *head;
		*head = (*head)->next;
		free(liberty);
	}
}
