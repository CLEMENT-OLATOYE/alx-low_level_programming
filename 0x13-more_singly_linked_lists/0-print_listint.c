#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t linked list
 * @h: linked list of type listint_t to print
 *
 * Return: node count
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *ndx = h;
	size_t cnt = 0;

	while (ndx != NULL)
	{
		printf("%d\n", ndx->n);
		cnt += 1;
		ndx = ndx->next;
	}

return (cnt);
}
