#include<stdio.h>
#include <stdlib.h>
struct node51{
    struct node51 *prev;
    int data;
    struct node51 *next;
};
void display51(struct node51 *head)
{
    struct node51 *ptr;
    ptr = head;
    while (ptr != NULL)
    {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
    printf("\n");
}

void create51(struct node51 **head){
    struct node51 *cur;
    struct node51 *tail;
    int n;
    printf("Enter no. of node51s:");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        cur=malloc(sizeof(struct node51));
        cur->data=rand()%100+1;
        cur->prev=cur->next=NULL;
        if(*head==NULL){
            *head=tail=cur;
        }
        else{
            cur->prev=tail;
            tail->next=cur;
            tail=cur;
        }
    }
}
int assg5prog1(){
    struct node51 *head=NULL;
    create51(&head);
    display51(head);
    return 0;
}