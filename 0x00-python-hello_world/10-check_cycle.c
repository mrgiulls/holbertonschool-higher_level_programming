#include "lists.h"
/**
 * check_cycle - checks if a singly linked list has a cycle in it
 * @list: Pointer to the beginning of the linked list
 * Return: 0 if there is no cycle, 1 if there is a cycle
 */
int check_cycle(listint_t *list)
{
	listint_t *hare = list, *turtle = list;

	while (hare && hare->next)
	{
		turtle = turtle->next;
		hare = hare->next->next;
		if (hare == turtle)
			return (1);
	}
	return (0);
}
