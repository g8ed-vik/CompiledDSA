#include<stdio.h>
struct node59
{
    struct node59 *prev;
    int data;
    struct node59 *next;
};
void rotate59(struct node59**head, int k)
{
    if(k==0) 
    return;
    struct node59 *temp=*head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=*head;
    (*head)->prev=temp;
    int count=1;
    while(count<=k)
    {
        *head=(*head)->next;
        temp=temp->next;
        count++;
    }
    temp->next=NULL;
    (*head)->prev=NULL;
}
void display59(struct node59 *head)
{
    struct node59 *ptr;
    ptr = head;
    while (ptr != NULL)
    {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
    printf("\n");
}

void create59(struct node59 **head){
    struct node59 *cur;
    struct node59 *tail;
    int n;
    printf("Enter no. of node59s:");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        cur=malloc(sizeof(struct node59));
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
int assg5prog9()
{
    struct node59 *head = NULL;
    create59(&head);
    display59(head);
    rotate59(&head, 4);
    display59(head);
    return 0;
}