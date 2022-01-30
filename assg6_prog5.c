#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

int same65(char a,char b)
    {
    if(a=='['&& b==']')
        return 1;
    if(a=='{'&& b=='}')
        return 1;
    if(a=='('&& b==')')
        return 1;
    return 0;
}
int check65(char *a)
    {
    char stack[1001],top=-1;
        for(int j=0;j<strlen(a);j++)
            {
         if(a[j]=='['||a[j]=='{'||a[j]=='(')
              stack[++top]=a[j]; 
           if(a[j]==']'||a[j]=='}'||a[j]==')')
               {
               if(top==-1)
                   {
               return 0;
               }
               else
                   {
                   if(!same65(stack[top--],a[j]))
                       {
               return 0;
               }
           }
        } 
}
    if(top!=-1)
                {
               return 0;
            }
    return 1;
}
int assg6prog5() {
char a[1001];
    int n,valid;
    scanf("%d",&n);
     for(int i=0;i<n;i++)
        {
     scanf("%s",a);
         valid = check65(a);
         if(valid==1)
             printf("YES\n");
    else
        printf("NO\n");
     }
    return 0;
}