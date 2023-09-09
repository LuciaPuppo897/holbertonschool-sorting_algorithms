#include "sort.h"
/**
* insertion_sort_list - sorts a doubly linked list using insertion sorting
* @list: double linked list to sort
* Return: void
*/
void insertion_sort_list(listint_t **list)
{
	listint_t *curr, *tmp, *previous;

	if (!list || !*list)
	{
		exit(1);
	}
	else
	{
		curr = *list;
		while (curr)
		{
			tmp = curr,	previous = tmp->prev;
			if (previous)
			{
				if (previous->prev && previous->n > curr->n)
				{
					tmp->prev = previous->prev,	previous->next = tmp->next;
					if (tmp->next)
						tmp->next->prev = previous;
					previous->prev->next = tmp,	previous->prev = tmp;
					tmp->next = previous, print_list(*list);
				}
				else if (previous->n > tmp->n)
				{
					tmp->prev = NULL;
					if (tmp->next)
						previous->next = tmp->next;
					else
						previous->next = NULL;
					if (tmp->next)
						tmp->next->prev = previous;
					previous->prev = tmp;
					tmp->next = previous, *list = tmp, print_list(*list);
				}
			}
			if (tmp->prev)
			{
				if (tmp->prev->n > tmp->n)
					;
				else
					curr = curr->next;
			}
			else
				curr = curr->next;
		}
	}
}
