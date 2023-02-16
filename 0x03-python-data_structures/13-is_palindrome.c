/**
 * is_palindrome - checks if a singly linked list is a palindrome
 * @head: pointer to pointer to head of list
 * Return: 0 if not a palindrome, 1 if it is a palindrome
 */
int is_palindrome(listint_t **head)
{
    int count = 0, i = 0, j = 0;
    listint_t *current = *head;
    int array[10000];

    if (head == NULL || *head == NULL || (*head)->next == NULL)
        return (1);

    while (current != NULL)
    {
        array[count] = current->n;
        count++;
        current = current->next;
    }

    for (i = 0, j = count - 1; i < count / 2; i++, j--)
    {
        if (array[i] != array[j])
            return (0);
    }

    return (1);
}

