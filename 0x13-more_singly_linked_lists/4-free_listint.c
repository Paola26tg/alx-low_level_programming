#include "lists.h"
/**
 * free_listint - frees list
 * @head: begin
 * Return: nothing
 */
void free_listint(listint_t *head)
{
	listint_t *liberador;

	while (head != NULL)
	{
	liberador = head;
	head = head->next;
	free(liberador);
	}
}
