#include "sort.h"

/**
 * insertion_sort_list - Sorts a doubly linked list of int in ascending order
 *
 * @list: Pointer to the head of the doubly linked list
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *current, *prev, *temp;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
	{
		return;
	}

	current = (*list)->next;

	while (current != NULL)
	{
		temp = current;

		while (temp->prev != NULL && temp->n < temp->prev->n)
		{
			prev = temp->prev;

			if (temp->next != NULL)
				temp->next->prev = prev;

			if (prev->prev != NULL)
				prev->prev->next = temp;
			else
				*list = temp;

			prev->next = temp->next;
			temp->prev = prev->prev;
			temp->next = prev;

			if (prev->prev != NULL)
				prev->prev->next = temp;

			prev->prev = temp;

			print_list(*list);
		}

		current = current->next;
	}
}
