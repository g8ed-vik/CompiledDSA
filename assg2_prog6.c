#include <stdio.h>
 
int assg2prog6()
{
 
        int size, i, largest;
 
        printf("\n Enter the size of the array: ");
        scanf("%d", &size);
        int arr[size];
 
        printf("\n Enter %d elements of  the array: \n", size);
 
        for (i = 0; i < size; i++)
        {   
            scanf("%d", &arr[i]);
        }
 
        largest = arr[0];
 
        for (i = 1; i < size; i++) 
        {
            if (largest < arr[i])
            largest = arr[i];
        }
 
        printf("\n Largest element present in the given array is : %d\n", largest);
        int c=0;
        for(int i=0;i<size;i++)
        {
            if(arr[i]==largest)
            {
                c++;
            }
            
            
        }
            printf("\noccurence of largest element:%d",c);

        return 0;
 
}