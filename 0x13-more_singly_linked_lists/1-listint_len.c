#include "lists.h"
/**
 * listint_len - return a number of elements
 * @h: first element
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	int i = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		i++;
		h = h->next;
	}

	return (i);
}
