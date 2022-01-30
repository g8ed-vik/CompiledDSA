// WAP to create a linked list that represents a polynomial expression with single variable (i.e. 5x7-3x5+x2+9) and display the polynomial by using user defined functions for creation and display.
#include<stdio.h>
#include <stdlib.h>
struct node91
{
    float cof;
    int exp;
    struct node91 *next;
};
void print91(struct node91 *head)
{
    if (head == NULL)
        printf("No polynomial");
    else
    {
        struct node91 *temp = head;
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
void create91(struct node91 **head){
    struct node91 *cur,*ptr;
    int nt;
    printf("Enter no. of nodes:");
    scanf("%d",&nt);
    printf("Enter coeff and expo:\n");
    for(int i=0;i<nt;i++){
        cur=malloc(sizeof(struct node91));
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
int assg9prog1(){
    struct node91 *h1,*h2;
    h1=h2=NULL;
    create91(&h1);
    print91(h1);
    return 0;
}