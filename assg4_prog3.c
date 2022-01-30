#include<stdio.h>

struct node43
{
    int data;
    struct node43 *next;
};
void display43(struct node43 *head)
{
    struct node43 *ptr;
    ptr = head;
    while (ptr != NULL)
    {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
}
void delete43 (struct node43 **head, int pos)
{
    struct node43 *current = *head;
    struct node43 *previous = *head;
    if (*head == NULL)
    {
        printf("List is already empty\n");
    }
    else if (pos == 1)
    {
        *head = current->next;
    }
    else
        while (pos != 1)
        {
            previous = current;
            current = current->next;
            pos--;
        }
    previous->next = current->next;
    free(current);
    current = NULL;
}

void search43(struct node43 **head)
{
    int item, i = 1,flag=0;
    struct node43 *ptr, *temp;
    ptr = *head;
    if (ptr == NULL)
    {
        printf("Empty List\n");
    }
    else
    {
        printf("\nEnter item which you want to search: ");
        scanf("%d", &item);
        while (ptr != NULL)
        {
            if (ptr->data == item)
            {
                printf("Item found at location %d\n", i);
                delete43 (head, i);
                temp = ptr;
                temp->data = item;
                temp->next = NULL;
                temp->next = *head;
                *head = ptr;
                flag=0;
                break;
            }
            else
            {
                flag=1;
            }
            i++;
            ptr = ptr->next;
        }
        
    }
    if(flag==1){
        printf("Item not found\n");
    }
}

void insert43(struct node43 **head, int val, int pos)
{
    struct node43 *temp = malloc(sizeof(struct node43));
    temp->data = val;
    temp->next = NULL;
    if (*head == NULL || pos == 0)
    {
        temp->next = *head;
        *head = temp;
    }
    else
    {
        struct node43 *ptr;
        ptr = *head;
        int i = 1;
        while (i < pos - 1 && ptr->next != NULL)
        {
            i++;
            ptr = ptr->next;
        }
        temp->next = ptr->next;
        ptr->next = temp;
    }
}
int assg4prog3()
{
    struct node43 *head = NULL;
    int pos;
    insert43(&head, 52, 0);
    insert43(&head, 4, 1);
    insert43(&head, 7, 2);
    insert43(&head, 22, 3);
    insert43(&head, 31, 4);
    display43(head);
    search43(&head);
    display43(head);
    return 0;
}