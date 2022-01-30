#include <stdio.h>
#define ll long long
void sortStack(int input[],int size) 
{ 
  int tmpStack[size];
  int top=-1;
  while (size>=0) 
  { 
      int tmp = input[size]; 
      size--; 
      while (top>=0 && tmpStack[top] < tmp) 
      { 
          input[++size]=tmpStack[top]; 
          top--;
      } 
      tmpStack[++top]=(tmp); 
  } 
  while (top>=0) 
  { 
      printf("%d ",tmpStack[top]); 
      top--;
  } 
} 
int assg6prog7()
{  
  int t;
  scanf("%d",&t);
  while(t--)
  {
    int n,x;
    scanf("%d",&n);
    int input[n];int top=-1;
    for(int i=0;i<n;i++){
      scanf("%d",&x);
      input[++top]=x;
    }
    sortStack(input,top); 
    printf("\n");
    }
  return 0;
 }