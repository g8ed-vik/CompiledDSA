#include <stdio.h>
#include <stdlib.h>
struct node47
{
 int data;
 struct node47 *next;
}*first=NULL,*second=NULL,*third=NULL;

void Display47(struct node47 *p)
{
    while(p!=NULL)
    {
        printf("%d ",p->data);
        p=p->next;
    }
}

void create47(int A[],int n)
{
    int i;
    struct node47 *t,*last;
    first=(struct node47 *)malloc(sizeof(struct node47));
    first->data=A[0];
    first->next=NULL;
    last=first;

    for(i=1;i<n;i++)
    {
        t=(struct node47*)malloc(sizeof(struct node47));
        t->data=A[i];
        t->next=NULL;
        last->next=t;
        last=t;
    }
}

void RemoveDuplicate47(struct node47 *p)
{
struct node47 *q=p->next;

while(q!=NULL)
{
if(p->data!=q->data)
{
p=q;
q=q->next;
}
else
{
p->next=q->next;
free(q);
q=p->next;
}
}

}
int assg4prog7()
{

 int A[]={10,30,30,30,50,50,50,60};
 create47(A,8);


 RemoveDuplicate47(first);
 Display47(first);

 return 0;
}