#include<stdio.h>
#include <stdlib.h>
struct node98{
int r,c,v;
struct node98 *next;
};
void print(struct node98 *h){
    struct node98*ptr;
    for(ptr=h;ptr!=NULL;ptr=ptr->next){
        printf("%d %d %d \n",ptr->r,ptr->c,ptr->v);
    }
}
void create(struct node98 **h){
    struct node98 *ptr,*cur;
    *h=malloc(sizeof(struct node98));
    (*h)->next=NULL;
    printf("Enter no. of rows, columns and non zero elements:\n");
    scanf("%d%d%d",&(*h)->r,&(*h)->c,&(*h)->v);
    ptr=*h;
    for(int i=0;i<(*h)->v;i++){
    cur=malloc(sizeof(struct node98));
    cur->next=NULL;
    scanf("%d%d%d",&cur->r,&cur->c,&cur->v);
    ptr->next=cur;
    ptr=cur;
    }
}
void simple(struct node98 **head){
    struct node98 *ptr,*ptr1,*prev;
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
void mul(struct node98 *A,struct node98 *B,struct node98 **C){
    struct node98 *ptr,*ptr1,*cur,*ptr2;
            if(A->c!=B->r)
            return;
            *C=malloc(sizeof(struct node98));
            (*C)->r=A->r;
            (*C)->c=B->c;
            (*C)->v=0;
            (*C)->next=NULL;
            ptr2=*C;
             for(ptr=A->next;ptr!=NULL;ptr=ptr->next){
                 for(ptr1=B->next;ptr1!=NULL;ptr1=ptr1->next){
                    cur=malloc(sizeof(struct node98));
                    if(ptr->c==ptr1->r){
                        cur->r=ptr->r;
                        cur->c=ptr1->c;
                        cur->v=(ptr->v)*(ptr1->v);
                        cur->next=NULL;
                        ptr2->next=cur;
                        ptr2=cur;
                        (*C)->v++;
                    }
                    
                 }
             }
}
int assg9prog8(){
    struct node98 *A,*B,*C;
    A=B=C=NULL;
    create(&A);
    printf("A:\n");
    print(A);
    create(&B);
    printf("B:\n");
    print(B);
    printf("Multiplication of sparse matrix:\n");
    mul(A,B,&C);
    simple(&C);
    print(C);
    return 0;
}