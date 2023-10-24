#include "lists.h"
/**
 * print_listint - prints the elements of linked lists
 * @h: linked listOf type listint_t toPrint
 *
 * Return: numberOf nodes
 */
size_t print_listint(const listint_t *h)
{
size_t num = 0;

while (h)
{
printf("%d\n", h->n);
num++;
h = h->next;
}

return (num);
}
