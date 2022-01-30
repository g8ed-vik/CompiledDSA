#include<stdio.h>
int linearSearch83(int arr[], int n, int ele){
    int ans=0;
    if (n==0){
        return 0;
    }
   for(int i=0 ; i<n ;i++)
   {
       if(arr[i]==ele){
           ans++;
       }
       
   }
    return ans;
}

int assg8prog3(){
    int n;
    printf("Enter the value for n\n");
    scanf("%d",&n);
    int arr[n];
    for( int i=0 ; i<n ; i++)
    scanf("%d",&arr[i]);
    int hunt;
    printf("Enter the element to be found\n");
    scanf(" %d",&hunt);
while(linearSearch83(arr,n,hunt)){
    hunt*=3;
}
    printf("%d",hunt);
    return 0;
}