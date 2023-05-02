#include "lists.h"

/**
* print_listint_safe - Prints a listint_t linked list
*
* @head: listint_t head
*
* Return: size_t
*/


size_t print_listint_safe(const listint_t *head)
{
	size_t i1 = 0, i2;
	const listint_t *temp = head;
	const listint_t *next_node;

	while (temp != NULL)
	{
		printf("[%p] %d\n", (void *)temp, temp->n);

		i1++;

		temp = temp->next;
		next_node = head;

		i2 = 0;

		while (i2 < i1)
		{
			if (temp == next_node)
			{
				printf("-> [%p] %d\n", (void *)temp, temp->n);
				return (i1);
			}

			next_node = next_node->next;
			i2++;
		}
	}
	return (i1);
}
