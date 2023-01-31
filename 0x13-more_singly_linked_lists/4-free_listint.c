#include "lists.h"
/**
 * free_listint - frees list
 * @head: begin
 * Return: nothing
 */
void free_listint(listint_t *head)
{
	if (head == NULL)
		return;

	while (head)
	{
		free(head);
		head = head->next;
	}
}
