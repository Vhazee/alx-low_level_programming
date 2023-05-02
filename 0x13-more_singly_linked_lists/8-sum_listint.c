#include "lists.h"

/**
 * sum_listint - function calculates sum of all data in a listint_t list
 * @head: the first node in the linked list
 *
 * Return: sum of all data in n
 */
int sum_listint(listint_t *head)
{
	listint_t *tempVal = head;
	int sum = 0;

	while (tempVal)
	{
		sum += tempVal->n;
		tempVal = tempVal->next;
	}
	return (sum);
}
