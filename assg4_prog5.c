#include<stdio.h> 
#include<stdlib.h>

struct node45 
{
    int data;
    struct node45  *next;
}*head=NULL,*last=NULL;
int coun45t();
void create45(int key)
{ 
    struct node45 *t;
    t=(struct node45 *)malloc(sizeof(struct node45));
    t->data=key;
    t->next=NULL;
    if(head==NULL) 
    head=last=t;
    else
    {
        t->next=last;
        last=t;
    }
}
void display45(struct node45 *p)
{ 
    printf("\n");
    while(p)
    {
        printf("%d ",p->data);
        p=p->next;
    }
}
void release45(void)
{
    struct node45 *temp1=head,*temp2;
    while(temp1)
    {
        temp2=temp1->next;
        free(temp1);
        temp1=temp2;
    }

}
void assg4prog5()
{
    create45(1);
    create45(2);
    create45(9);
    create45(6);
    display45(last);
    release45();
}