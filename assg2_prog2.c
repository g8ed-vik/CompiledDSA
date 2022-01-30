#include <stdio.h>
int assg2prog2()
{
    int no,i;
    printf("Enter the number of elements in array:\t");
    scanf("%d", &no);
    int array[no];
    printf("Enter the array elements:\n");
    for(i=0; i<no; i++)
    {
        scanf("%d", &array[i]);
        
    }
    int lower,upper;
    printf("Enter the lower and upper Bound i.e. x & y(both inclusive):\t");
    scanf("%d%d", &lower, &upper);
    int count=0;
    for(i=0; i<no; i++)
    {
        if(i>=lower && i<=upper)
        {
            count++;
            
        }
        
    }
    printf("Mininum distance between %d & %d is %d", lower, upper, count);
}