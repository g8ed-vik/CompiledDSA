#include <stdio.h>
#include <stdlib.h>
#include <limits.h>


#define SIZE 100 


int stack61[SIZE];


int top = -1;



void push61(int element)
{
    if (top >= SIZE)
    {
        printf("Error! Stack overflow detected!!.\n");
        return;
    }


    top++;
    stack61[top] = element;
    printf("Element pushed to stack.\n");
}


int pop61()
{
    if (top < 0)
    {
        printf("Stack is empty. Pop operation impossible\n");
        return INT_MIN;
    }
    else
    {
       return stack61[top--];
    }
}

int assg6prog1()
{
    int userChoice, data;


    while(1)
    {
        printf("****************Please select an option***********\n");
        printf("1. Push element\n");
        printf("2. Pop element\n");
        printf("3. Check stack\n");
        printf("4. Quit program\n");
        printf("Enter your choice: ");
        scanf("%d", &userChoice);


        switch(userChoice)
        {
            case 1:
                printf("Enter data to push into stack: ");
                scanf("%d", &data);
                push61(data);
                break;
            case 2:
                data = pop61();
                if (data != INT_MIN)
                    printf("Data => %d\n", data);
                break;
            case 3:
                printf("Stack size is: %d\n", top + 1);
                break;
            case 4:
                printf("Exiting program...\n");
                exit(0);
                break;
            default:
                printf("Invalid choice, please enter 1, 2, 3 or 4 only.\n");
        }
    }


    return 0;
}
