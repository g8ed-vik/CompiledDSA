#include<stdio.h>
int assg2prog8(){
    int n,i;
    printf("Enter the number of elements to be added:\t");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the array elements:\n");
    for (i = 0; i <n; i++)
    {
        /* code */
        scanf("%d",&arr[i]);
    }
    int lower,upper;
    printf("Enter the upper and lower bound(both inclusive):\t");
    scanf("%d%d",&lower,&upper);
    int count=0;
      for (i = 0; i <n; i++)
    {
        /* code */
        if (i>lower && i<upper)
        {
            /* code */
            count++;
        }
        
    }
    printf("There are %d number of elements between %d and %d in the array",count,lower,upper);
    return 0;
    
}