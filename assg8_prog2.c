#include <stdio.h>
int assg8prog2(){
   int i, lb, ub, middle, n, search, ar[100],j,a;
   printf("Enter number of elements :: ");
   scanf("%d",&n);
   printf("\nEnter %d integers :: \n", n);
   for ( i = 0 ; i < n ; i++ )
   {
       printf("\nEnter %d value :: ", i+1);
       scanf("%d",&ar[i]);
   }
for (i = 0; i < n; ++i) 
        {
   for (j = i + 1; j < n; ++j)
            {
 if (ar[i] > ar[j]) 
                {
          a =  ar[i];
                 ar[i] = ar[j];
                    ar[j] = a;
                }
            }
        }
 
        printf("The numbers arranged in ascending order are given below \n");
        for (i = 0; i < n; ++i)
            printf("%d\n", ar[i]);
   printf("\nEnter value to search :: ");
   scanf("%d",&search);
    lb = 0;
   ub = n - 1;
   middle = (lb+ub)/2;
    while( lb<= ub ){
        if ( ar[middle] < search )
                lb = middle + 1;
        else if ( ar[middle] == search ) {
                printf("\n %d found at location %d.\n", search, middle+1);
                break;
        }
        else
                ub = middle - 1;
        middle = (lb + ub)/2;
   }
   if ( lb > ub )
      printf("Not found! %d is not present in the list.\n", search);
return 0;
}