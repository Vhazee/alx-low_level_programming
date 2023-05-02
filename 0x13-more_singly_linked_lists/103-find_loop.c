#include "lists.h"

/**
 * find_listint_loop - function finds the loop in a linked list
 * @head: pointer to linked list to search for
 *
 * Return: the address of the node where the loop starts, or NULL
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *first = head;
	listint_t *second = head;

	if (!head)
		return (NULL);

	while (first && second && second->next)
	{
		second = second->next->next;
		first = first->next;
		if (first == second)
		{
			first = head;
			while (first != second)
			{
				first = first->next;
				second = second->next;
			}
			return (second);
		}
	}
	return (NULL);
}
