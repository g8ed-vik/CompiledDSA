//Q.1 Linked List Insertion
#include<stdio.h>
#include<stdlib.h>

struct Node41{
    int data;
    struct Node41 * next;
};



struct Node41 * insert(int x)
{
    struct Node41 *head=NULL;
    struct Node41 *temp=NULL;
    struct Node41 *p=NULL;
    
    for(int i=0;i<x;i++)
    {
        temp = (struct Node41 *)malloc(sizeof(struct Node41));
        printf("Enter No. : ");
        scanf("%d",&(temp->data));
        temp->next=NULL;
        
        if(head==NULL)
        {
            head=temp;
        }
        else{
            p=head;
            while(p->next!=NULL)
            p=p->next;
            p->next=temp;
        }
        
    }
    return head;
    
}

// Case 1
struct Node41 * insertAtFirst41(struct Node41 *head, int data){
    struct Node41 * ptr = (struct Node41 *) malloc(sizeof(struct Node41));
    ptr->data = data;

    ptr->next = head;
    return ptr; 
}

// Case 2
struct Node41 * insertAtIndex41(struct Node41 *head, int data, int index){
    struct Node41 * ptr = (struct Node41 *) malloc(sizeof(struct Node41));
    struct Node41 * p = head;
    int i = 0;

    while (i!=index-1)
    {
        p = p->next;
        i++;
    }
    ptr->data = data;
    ptr->next = p->next;
    p->next = ptr;
    return head;
}

// Case 3
struct Node41 * insertAtEnd41(struct Node41 *head, int data){
    struct Node41 * ptr = (struct Node41 *) malloc(sizeof(struct Node41));
    ptr->data = data;
    struct Node41 * p = head;

    while(p->next!=NULL){
        p = p->next;
    }
    p->next = ptr;
    ptr->next = NULL;
    return head;
}


void linkedListTraversal41(struct Node41 *ptr)
{
    while (ptr != NULL)
    {
        printf(" %d,", ptr->data);
        ptr = ptr->next;
    }
}

int assg4prog1()
{   int n,x;
    printf("NO. of Nodes in Linked List : ");
    scanf("%d",&n);
    
    struct Node41 *HEAD=NULL;
         HEAD = insert(n);
         printf("*LINKED LIST**\n ");
        linkedListTraversal41(HEAD);
         printf("\n***AFTER INSERTION**\n ");
        HEAD = insertAtEnd41(HEAD, 69);
        linkedListTraversal41(HEAD);
    return 0;
}