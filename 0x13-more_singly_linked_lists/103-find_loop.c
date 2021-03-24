/**
 * find_listint_loop - detects where the loop starts.
 * @head: the head of the list to check if there is loop.
 *
 * Return: pointer to loop or NULL if no loop.
 */
listint_t *find_listint_loop(listint_t *head)
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
