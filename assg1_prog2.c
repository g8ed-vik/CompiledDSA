#include<stdio.h>

int assg1prog2()
{
int a[50],i,n,large,small;
printf("\nEnter the number of elements : ");
scanf("%d",&n);
printf("\nInput the array elements : ");
for(i=0;i<n;++i)
scanf("%d",&a[i]);
for(i=n-1;i>=0;i--)
{
    printf(" %d",a[i]);
}
return 0;
}