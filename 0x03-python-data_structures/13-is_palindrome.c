/**
 * is_palindrome - checks if a singly linked list is a palindrome
 * @head: pointer to pointer to the head of the list
 * Return: 1 if the list is a palindrome, 0 otherwise
 */
int is_palindrome(listint_t **head)
{
  listint_t *slow = *head, *fast = *head;
  listint_t *prev = NULL, *next = NULL;
  
  if (*head == NULL || (*head)->next == NULL)
    return (1);

  while (fast != NULL && fast->next != NULL)
  {
    fast = fast->next->next;
    next = slow->next;
    slow->next = prev;
    prev = slow;
    slow = next;
  }

  if (fast != NULL)
    slow = slow->next;

  while (slow != NULL)
  {
    if (prev->n != slow->n)
      return (0);
    prev = prev->next;
    slow = slow->next;
  }

  return (1);
}

