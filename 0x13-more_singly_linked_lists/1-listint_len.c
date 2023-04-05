#include "lists.h"

/**
 *listint_len - prints the numbers of element in a linked list
 *@h: the head pointer
 *Return: size of list
 */

size_t listint_len(const listint_t *h)
{
size_t i = 0;

while (h)
{
h = h->next;
i++;
}
return (i);
}
