#include<stdio.h>
#include <stdlib.h>
struct node97{
int r,c,v;
struct node97 *next;
};
void print(struct node97 *h){
    struct node97*ptr;
    for(ptr=h;ptr!=NULL;ptr=ptr->next){
        printf("%d %d %d \n",ptr->r,ptr->c,ptr->v);
    }
}
void create(struct node97 **h){
    struct node97 *ptr,*cur;
    *h=malloc(sizeof(struct node97));
    (*h)->next=NULL;
    printf("Enter no. of rows, columns and non zero elements:\n");
    scanf("%d%d%d",&(*h)->r,&(*h)->c,&(*h)->v);
    ptr=*h;
    for(int i=0;i<(*h)->v;i++){
    cur=malloc(sizeof(struct node97));
    cur->next=NULL;
    scanf("%d%d%d",&cur->r,&cur->c,&cur->v);
    ptr->next=cur;
    ptr=cur;
    }
}
void simple(struct node97 **head){
    struct node97 *ptr,*ptr1,*prev;
    for(ptr=*head;ptr!=NULL;ptr=ptr->next){
        prev=ptr;
        ptr1=ptr->next;
        while(ptr1!=NULL){
if(ptr1->r==ptr->r && ptr1->c==ptr->c){
    ptr->v=ptr->v+ptr1->v;
    prev->next=ptr1->next;
    free(ptr1);
    ptr1=prev;
    (*head)->v--;
}
prev=ptr1;
ptr1=ptr1->next;
        }
    }
}
void add(struct node97 *A,struct node97 *B,struct node97 **C){
struct node97 *ptr,*ptr1,*cur;
if(A->r!=B->r || A->c!=B->c)
return;
*C=malloc(sizeof(struct node97));
(*C)->r=A->r;
(*C)->c=A->c;
(*C)->v=A->v+B->v;
(*C)->next=NULL;
    ptr=*C;
    for(ptr1=A->next;ptr1!=NULL;ptr1=ptr1->next){
        cur=malloc(sizeof(struct node97));
        cur->r=ptr1->r;
        cur->c=ptr1->c;
        cur->v=ptr1->v;
        cur->next=NULL;
        ptr->next=cur;
        ptr=cur;
    }
for(ptr1=B->next;ptr1!=NULL;ptr1=ptr1->next){
        cur=malloc(sizeof(struct node97));
        cur->r=ptr1->r;
        cur->c=ptr1->c;
        cur->v=ptr1->v;
        cur->next=NULL;
        ptr->next=cur;
        ptr=cur;
    }
}
int assg9prog7(){
    struct node97 *A,*B,*C;
    A=B=C=NULL;
    create(&A);
    printf("A:\n");
    print(A);
    create(&B);
    printf("B:\n");
    print(B);
    printf("Addition of sparse matrix:\n");
    add(A,B,&C);
    simple(&C);
    print(C);
    return 0;
}