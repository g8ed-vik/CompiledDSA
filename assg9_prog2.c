#include<stdio.h>
#include <stdlib.h>
struct node92
{
    float cof;
    int exp;
    struct node92 *next;
};
void print(struct node92 *head)
{
    if (head == NULL)
        printf("No polynomial");
    else
    {
        struct node92 *temp = head;
        while (temp != NULL)
        {
            printf("(%.1fx^%d) ", temp->cof, temp->exp);
            temp = temp->next;
            if (temp != NULL)
                printf(" + ");
            else
                printf("\n");
        }
    }
}
void create(struct node92 **head){
    struct node92 *cur,*ptr;
    int nt;
    printf("Enter no. of node92s:");
    scanf("%d",&nt);
    printf("Enter coeff and expo:\n");
    for(int i=0;i<nt;i++){
        cur=malloc(sizeof(struct node92));
        cur->next=NULL;
        scanf("%f%d",&cur->cof,&cur->exp);
        if(*head==NULL){
            *head=cur;
            ptr=cur;
        }
        else{
            ptr->next=cur;
            ptr=cur;
        }
    }
}
void join(struct node92 **head1,struct node92 *head2){
    struct node92 *ptr;
    if(*head1==NULL)
    *head1=head2;
    else{
        for(ptr=*head1;ptr->next!=NULL;ptr=ptr->next);
        ptr->next=head2;
    }
}
void simple(struct node92 **head){
    struct node92 *ptr,*ptr1,*prev;
    for(ptr=*head;ptr!=NULL;ptr=ptr->next){
        prev=ptr;
        ptr1=ptr->next;
        while(ptr1!=NULL){
if(ptr1->exp==ptr->exp){
    ptr->cof=ptr->cof+ptr1->cof;
    prev->next=ptr1->next;
    free(ptr1);
    ptr1=prev;
}
prev=ptr1;
ptr1=ptr1->next;
        }
    }
}
int assg9prog2(){
    struct node92 *h1,*h2;
    h1=h2=NULL;
    create(&h1);
    create(&h2);
    join(&h1,h2);
    simple(&h1);
    print(h1);
    return 0;
}