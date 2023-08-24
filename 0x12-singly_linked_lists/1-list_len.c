#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * list_len - prints all the elements of a linked_list
 * @h: a linked_list
 * Return:  the number of elements in a linked list_t list.
 **/

size_t list_len(const list_t *h)
{
	int cntr = 0;

	while (h != NULL)
	{
		cntr++;
		h = h->next;
	}

	return (cntr);

}
