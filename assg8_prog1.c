#include<stdio.h>

int assg8prog1()
{
int a[50],i,n,x;
printf("\nEnter the number of elements : ");
scanf("%d",&n);
printf("\nInput the array elements : ");
for(i=0;i<n;++i)
scanf("%d",&a[i]);
printf("enter the element to be searched:");
scanf("%d",&x);
for(i=0;i<n;i++)
{
    if(a[i]==x)
    {
        printf("%d found at position %d",x,i+1);
    }
}
    
return 0;
}