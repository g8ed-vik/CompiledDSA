//  A matrix m × n that has relatively few non-zero entries is called sparse matrix. It may be represented in much less than m × n space. An m × n matrix with k non-zero entries is sparse if k << m × n. It may be faster to represent the matrix compactly as a list of the non-zero indexes and associated entries. WAP to represent a sparse matrix using linked list.
#include<stdio.h>
#include <stdlib.h>
struct node93{
int r,c,v;
struct node93 *next;
};
void print(struct node93 *h){
    struct node93*ptr;
    for(ptr=h;ptr!=NULL;ptr=ptr->next){
        printf("%d %d %d \n",ptr->r,ptr->c,ptr->v);
    }
}
void create(struct node93 **h){
    struct node93 *ptr,*cur;
    *h=malloc(sizeof(struct node93));
    (*h)->next=NULL;
    printf("Enter no. of rows, columns and non zero elements:\n");
    scanf("%d%d%d",&(*h)->r,&(*h)->c,&(*h)->v);
    ptr=*h;
    for(int i=0;i<(*h)->v;i++){
    cur=malloc(sizeof(struct node93));
    cur->next=NULL;
    scanf("%d%d%d",&cur->r,&cur->c,&cur->v);
    ptr->next=cur;
    ptr=cur;
    }
}
int assg9prog3(){
    struct node93 *A,*B,*C;
    A=B=C=NULL;
    create(&A);
    printf("A:\n");
    print(A);
    return 0;
}