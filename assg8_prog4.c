#include<stdio.h>

int findElement84(int arr[], int n){

    
    int count = 1, max_ele = -1, temp = arr[0], ele, f=0;
     
    for(int i=1;i<n;i++)
    {

        if(temp==arr[i])
        {
            count++;
        }
        else
        {
            count = 1;
            temp = arr[i];
        }
        
        if(max_ele<count)
        {
            max_ele = count;
            ele = arr[i];
             
            if(max_ele>=(n/2))
            {
                f = 1;
                break;
            }
        }
    }
    return (f==1 ? ele : -1);
}
int assg8prog4(){
int n;
    printf("Enter the value for n\n");
    scanf("%d",&n);
    int arr[n];
    for( int i=0 ; i<n ; i++)
    scanf("%d",&arr[i]);

    printf("%d \n",findElement84(arr, n));
    return 0;
}