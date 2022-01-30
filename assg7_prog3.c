#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *f;
struct node *R;


int isEmpty()
{
    if (R == NULL)
    {
        printf("Queue is empty\n");
        return 1;
    }
    else
        printf("Queue is not empty\n");
    return 0;
}
void ins()
{
    struct node *ptr;
    int item;
    ptr = (struct node *)malloc(sizeof(struct node));
    if (ptr == NULL)
    {
        printf("\nOVERFLOW\n");
        return;
    }
    else
    {
        printf("Enter value:");
        scanf("%d", &item);
        ptr->data = item;
        if (f == NULL)
        {
            f = ptr;
            R = ptr;
            f->next = NULL;
            R->next = NULL;
        }
        else
        {
            R->next = ptr;
            R = ptr;
            R->next = NULL;
        }
    }
}
void del()
{
    struct node *ptr;
    if (f == NULL)
    {
        printf("\nUNDERFLOW\n");
        return;
    }
    else
    {
        ptr = f;
        f = f->next;
        free(ptr);
    }
}
void peek()
{
    if (f == NULL)
    {
        printf("\nUNDERFLOW\n");
        return;
    }
    else
    {
        printf("Peeked element is %d\n", f->data);
    }
}
void display()
{
    struct node *ptr;
    ptr = f;
    if (f == NULL)
    {

        printf("\nEmpty queue");
    }
    else
    {
        printf("Elements of Queue:");
        while (ptr != NULL)
        {
            printf(" %d", ptr->data);
            ptr = ptr->next;
        }
        printf("\n");
    }
}
int assg7prog3()
{
    int choice;
    while (1)
    {
        printf("\n1.Insert an element\n2.Delete an element\n3.Peek\n4.Display the queue\n5.Check empty\n6.Exit\n");
        printf("Enter your choice:");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            ins();
            break;
        case 2:
            del();
            break;
        case 3:
            peek();
            break;
        case 4:
            display();
            break;
        case 5:
            isEmpty();
            break;
        case 6:
            exit(1);
            break;
        default:
            printf("\nEnter valid choice!!");
        }
    }
    return 0;
}