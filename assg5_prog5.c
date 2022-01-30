#include <stdio.h>
#include <stdlib.h>
struct node55
{
    int data;
    struct node55* next;
};
void printList55(struct node55* head)
{
    struct node55* ptr = head;
    while (ptr)
    {
        printf("%d —> ", ptr->data);
        ptr = ptr->next;
    }
    printf("null");
}
 void push(struct node55** head, int data)
{
    struct node55* newnode55 = (struct node55*)malloc(sizeof(struct node55));
    newnode55->data = data;
    newnode55->next = *head;
    *head = newnode55;
}
void removeDuplicates55(struct node55* head)
{
   
    if (head == NULL) {
        return;
    }
 
    struct node55* current = head;
   while (current->next != NULL)
    {
        if (current->data == current->next->data)
        {
            struct node55* nextNext = current->next->next;
            free(current->next);
            current->next = nextNext;
        }
        else {
            current = current->next;    
        }
    }
} 
int assg5prog5()
{
    int keys[] = {1, 2, 2, 2, 3, 4, 4, 5};
    int n = sizeof(keys)/sizeof(keys[0]);
    struct node55* head = NULL;
    for (int i = n-1; i >= 0; i--) {
        push(&head, keys[i]);
    }
    removeDuplicates55(head);
    printList55(head);
    return 0;
}

