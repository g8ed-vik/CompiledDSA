#include <stdio.h>
#include <stdlib.h>
struct node57
{
    int num;
    struct node57 *next;
};

void move57(struct node57 *head)
{
    struct node57 *p, *q;
    int ch;
 
    p = q = head;
    printf("\nPointer at %d\n", head->num);
    do
    {
        printf("Select option:\n1. Move front\n2. Move back\n3. Exit\nYour choice: ");
        scanf("%d", &ch);
        switch(ch)
        {
        case 1: if(q->next != NULL)
                {
                    q = q->next;
                    printf("\nPointer at %d\n", q->num);
                }
                else
                {
                    printf("\nPointer at last node57 %d. Cannot move ahead.\n", q->num);
                }
                break;
        case 2: while (p->next != q)
                {
                    p = p->next;
                }
                if (p == q)
                {
                    printf("\nPointer at first node57 %d. Cannot move behind.\n", q->num);
                }
                else
                {
                    q = p;
                    p = head;
                    printf("\nPointer at %d\n", q->num);
                }
                break;
        case 3: return;
        default: printf("\nInvalid choice entered. Try again\n");
        }
    } while (1);
}
 
void create57(struct node57 **head)
{
    int c, ch;
    struct node57 *temp, *rear;
 
    do
    {
        printf("Enter number: ");
        scanf("%d", &c);
        temp = (struct node57 *)malloc(sizeof(struct node57));
        temp->num = c;
        temp->next = NULL;
        if (*head == NULL)
        {
            *head = temp;
        }
        else
        {
            rear->next = temp;
        }
        rear = temp;
        printf("Do you wish to continue [1/0]: ");
        scanf("%d", &ch);
    } while (ch != 0);
    printf("\n");
}
 
void display57(struct node57 *head)
{
    while (head != NULL)
    {
        printf("%d\t", head->num);
        head = head->next;
    }
    printf("\n");
}
 
void release57(struct node57 **head)
{
    struct node57 *temp;
    while ((*head) != NULL)
    {
        temp = *head;
        (*head) = (*head)->next;
        free(temp);
    }
}

int assg5prog7()
{
    struct node57 *p = NULL, *q = NULL;
    int result, count;
    printf("Enter data into the list\n");
    create57(&p);
    printf("Displaying list:\n");
    display57(p);
    move57(p);
    release57(&p);
    return 0;
}