#include "lists.h"
/**
 * find_listint_loop - findsThe loop in linked list
 * @head: linked listTo search for
 *
 * Return: addressOf the node where the loop start or NULL
 */
listint_t *find_listint_loop(listint_t *head)
{
 listint_t *slow = head;
 listint_t *fast = head;

 if (!head)
 return (NULL);

 while (slow && fast && fast->next)
 {
 fast = fast->next->next;
 slow = slow->next;
 if (fast == slow)
 {
 slow = head;
 while (slow != fast)
 {
 slow = slow->next;
 fast = fast->next;
 }
 return (fast);
 }
 }

 return (NULL);
}
