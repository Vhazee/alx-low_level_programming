#include "lists.h"

/**
 * print_listint - this function prints elements of a linked list
 * @h: type listint_t linked list to print
 *
 * Return: number of nodes formed
 */
size_t print_listint(const listint_t *h)
{
	size_t value = 0;

	while (h)
	{
		printf("%d\n", h->n);
		value++;
		h = h->next;
	}
	return (value);
}
