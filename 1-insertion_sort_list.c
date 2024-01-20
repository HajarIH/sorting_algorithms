#include "sort.h"

/**
 * swap_node - a function to swap node
 * @h: the head
 * @n1: the first node
 * @n2: the second node
 *
 * Return: Void
 */

void swap_node(listint_t **h, listint_t **n1, listint_t *n2)
{
	(*n1)->next = n2->next;
	if (n2->next != NULL)
		n2->next->prev = *n1;
	n2->prev = (*n1)->prev;
	n2->next = *n1;
	if ((*n1)->prev != NULL)
		(*n1)->prev->next = n2;
	else
		*h = n2;
	(*n1)->prev = n2;
	*n1 = n2->prev;
}

/**
 * insertion_sort_list - a function that sorts a doubly linked list
 * of integers in ascending order using the Insertion sort algorithm
 * @list: the list to sort
 *
 * Return: Void
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *current, *iter, *insert;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;

	for (iter = (*list)->next; iter != NULL; iter = current)
	{
		current = iter->next;
		insert = iter->prev;
		while (insert != NULL && iter->n < insert->n)
		{
			swap_node(list, &insert, iter);
			print_list(*list);
		}
	}
}
