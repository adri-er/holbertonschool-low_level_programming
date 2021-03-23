#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_listint_safe - prints all the elements of listint_t list.
 * @head: pointer to the head of the list.
 *
 * Return: size of the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t size = 0;
	const listint_t *copy = head, *loop_point = head;
	int loop = 0;

	if (head == NULL)
	{
		return (size);
	}
	loop_point = detect_loop(head);
	if (loop_point != NULL)
	{
		loop = 1;
	}
	while (copy != NULL)
	{
		if (loop == 1 || loop == 0)
		{
			printf("[%p] %d\n", (void *)copy, copy->n);
			if (loop == 1 && copy == loop_point)
			{
				loop = 2;
			}
			copy = copy->next;
			size++;
		}
		else if (loop == 2)
		{
			printf("-> [%p] %d\n", (void *)loop_point->next, loop_point->next->n);
			exit(98);
		}
	}
	return (size);
}

/**
 * detect_loop - detects where the loop starts.
 * @head: the head of the list to check if there is loop.
 *
 * Return: pointer to loop or null if no loop.
 */
const listint_t *detect_loop(const listint_t *head)
{
	const listint_t *slow = head, *fast = head;

	while (slow && fast && fast->next)
	{
		slow = slow->next;
		fast = fast->next->next;
		if (slow == fast)
		{
			return (slow->next);
		}
	}
	return (NULL);
}
