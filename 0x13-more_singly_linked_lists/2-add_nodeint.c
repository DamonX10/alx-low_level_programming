#include "lists.h"
/**
 * add_nodeint - adds new node at beginning of linked list
 * @head: pointer for first node in list
 * @n: data to insert in new node
 *
 * Return: pointerTo new node, or NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
 listint_t *new;

 new = malloc(sizeof(listint_t));
 if (!new)
 return (NULL);

 new->n = n;
 new->next = *head;
 *head = new;

 return (new);
}
