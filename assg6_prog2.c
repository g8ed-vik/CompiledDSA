#include <stdio.h>
#include <stdlib.h>
 
struct node62
{
    int info;
    struct node62 *ptr;
}*top,*top1,*temp;
 
int count = 0;

void create62()
{
    top = NULL;
}
 
void stack_count62()
{
    printf("\n No. of elements in stack : %d", count);
}
 
void push62(int data)
{
    if (top == NULL)
    {
        top =(struct node62 *)malloc(1*sizeof(struct node62));
        top->ptr = NULL;
        top->info = data;
    }
    else
    {
        temp =(struct node62 *)malloc(1*sizeof(struct node62));
        temp->ptr = top;
        temp->info = data;
        top = temp;
    }
    count++;
}
 
void display62()
{
    top1 = top;
 
    if (top1 == NULL)
    {
        printf("Stack is empty");
        return;
    }
 
    while (top1 != NULL)
    {
        printf("%d ", top1->info);
        top1 = top1->ptr;
    }
 }
 
void pop62()
{
    top1 = top;
 
    if (top1 == NULL)
    {
        printf("\n Error : Trying to pop from empty stack");
        return;
    }
    else
        top1 = top1->ptr;
    printf("\n Popped value : %d", top->info);
    free(top);
    top = top1;
    count--;
}
 
int topelement62()
{
    return(top->info);
}
 
void empty62()
{
    if (top == NULL)
        printf("\n Stack is empty");
    else
        printf("\n Stack is not empty with %d elements", count);
}
 
void destroy62()
{
    top1 = top;
 
    while (top1 != NULL)
    {
        top1 = top->ptr;
        free(top);
        top = top1;
        top1 = top1->ptr;
    }
    free(top1);
    top = NULL;
 
    printf("\n All stack elements destroyed");
    count = 0;
}
 
void assg6prog2()
{
    int no, ch, e;
 
    printf("\n 1 - Push");
    printf("\n 2 - Pop");
    printf("\n 3 - Top");
    printf("\n 4 - Empty");
    printf("\n 5 - Exit");
    printf("\n 6 - Dipslay");
    printf("\n 7 - Stack Count");
    printf("\n 8 - Destroy stack");
 
    create62();
 
    while (1)
    {
        printf("\n Enter choice : ");
        scanf("%d", &ch);
 
        switch (ch)
        {
        case 1:
            printf("Enter data : ");
            scanf("%d", &no);
            push62(no);
            break;
        case 2:
            pop62();
            break;
        case 3:
            if (top == NULL)
                printf("No elements in stack");
            else
            {
                e = topelement62();
                printf("\n Top element : %d", e);
            }
            break;
        case 4:
            empty62();
            break;
        case 5:
            exit(0);
        case 6:
            display62();
            break;
        case 7:
            stack_count62();
            break;
        case 8:
            destroy62();
            break;
        default :
            printf(" Wrong choice, Please enter correct choice  ");
            break;
        }
    }
}
 
