#include "sort.h"

/**
 * insertion_sort_list - implement the insertion sort
 * algorithm with a doubly linked list
 * @list: pointer to the head of a listint_t doubly linked
 * list
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *sorted, *unsorted, *next;

	if (!list || !(*list) || !(*list)->next)
		return;

	unsorted = (*list)->next;

	while (unsorted)
	{
		next = unsorted->next;
		sorted = unsorted->prev;

		while (sorted && sorted->n > unsorted->n)
		{
			sorted->next = unsorted->next;

			if (unsorted->next)
				unsorted->next->prev = sorted;

			unsorted->next = sorted;

			if (sorted->prev)
				sorted->prev->next = unsorted;
			else
				*list = unsorted;

			unsorted->prev = sorted->prev;
			sorted->prev = unsorted;
			sorted = unsorted->prev;

			print_list(*list);
		}
		unsorted = next;
	}
}

