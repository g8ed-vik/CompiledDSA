#include <stdio.h>
#include <stdlib.h>
struct node42
{
    int data;
    struct node42 *next;
};
void create42(struct node42 **head)
{
   
    struct node42 *current, *ptr;
    for (int i = 0; i < 8; i++)
    {
        current = malloc(sizeof(struct node42));
        current->data = rand() % 100 + 1;
        current->next = NULL;
        if (*head == NULL)
        {
            *head = current;
            ptr = current;
        }
        else
        {
            ptr->next = current;
            ptr = current;
        }
    }
}
void insert42(struct node42 **head,int val,int pos){
    struct node42 *temp=malloc(sizeof(struct node42));
    temp->data=val;
    temp->next=NULL;
    if(*head==NULL || pos==0){
       temp->next=*head;
       *head=temp;
    }
    else{
        struct node42 *ptr;
        ptr=*head;
        int i=1;
        while(i<pos-1 && ptr->next!=NULL){
            i++;
            ptr=ptr->next;
        }
        temp->next=ptr->next;
            ptr->next=temp;
    }

}
void delete42 (struct node42 **head, int val,int pos)
{
    if (*head == NULL)
        printf("List empty");
    else
    {
        struct node42 *ptr ,*prev;
        ptr = *head;
        while (ptr != NULL)
        {
            if (ptr->data == val)
                break;
                prev = ptr;
                ptr = ptr->next;
        }
        if (ptr == NULL)
            printf("Data not found ");
        else if (ptr == *head)
        {
            *head = ptr->next;
            free(ptr);
        }
        else
        {
            prev->next = ptr->next;
            free(ptr);
        }
    }
}
void display42(struct node42 *head)
{
    struct node42 *current = head;
    for (; current != NULL; current = current->next)
    {
        printf("%d ", current->data);
    }
    printf("\n");
}
int assg4prog2()
{
    int val;
    struct node42 *head = NULL;
    create42(&head);
    insert42(&head,34,10);
    insert42(&head,67,59);
    insert42(&head,89,21);
    display42(head);
    delete42(&head,34,10);
    delete42(&head,89,21);
    delete42(&head,67,59);
    display42(head);

    return 0;
}