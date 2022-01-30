#include <stdio.h>
#include <stdlib.h>

struct node54 {
    int num;
    struct node54 * nextptr;
}*stnode54;
 



void ClListcreation54(int n)
{
    int i, num;
    struct node54 *preptr, *newnode54;

    if(n >= 1)
    {
        stnode54 = (struct node54 *)malloc(sizeof(struct node54));

        printf(" Input data for node54 1 : ");
        scanf("%d", &num);
        stnode54->num = num;
        stnode54->nextptr = NULL;
        preptr = stnode54;
        for(i=2; i<=n; i++)
        {
            newnode54 = (struct node54 *)malloc(sizeof(struct node54));
            printf(" Input data for node54 %d : ", i);
            scanf("%d", &num);
            newnode54->num = num;
            newnode54->nextptr = NULL;	
            preptr->nextptr = newnode54;	
            preptr = newnode54;   		
        }
        preptr->nextptr = stnode54; 		
    }
}

void displayClList54()
{
    struct node54 *tmp;
    int n = 1;

    if(stnode54 == NULL)
    {
        printf(" No data found in the List yet.");
    }
    else
    {
        tmp = stnode54;
        printf("\n\n Data entered in the list are :\n");

        do {
            printf(" Data %d = %d\n", n, tmp->num);

            tmp = tmp->nextptr;
            n++;
        }while(tmp != stnode54);
    }
}
int assg5prog4()
{
    int n;
    stnode54 = NULL;
	printf("\n\n Circular Linked List : Create and display a circular linked list :\n");
	printf("-----------------------------------------------------------------------\n");	   	

    printf(" Input the number of node54s : ");
    scanf("%d", &n);
 
    ClListcreation54(n); 
    displayClList54();
    return 0;
}


