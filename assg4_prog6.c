#include<stdio.h>
 #include<stdlib.h>
 struct node46
 {
 int info;
 struct node46 * next;
 };
 struct node46 * start = NULL;

 void add46(int item)
 {
 struct node46 * t, * p;
 t = (struct node46 *)malloc( sizeof( struct node46 ));
 if(start == NULL)
 {
 start = t;
 start -> info = item;
 start -> next = NULL;
 return;
 }
 else
 {
 struct node46 * p = start;
 while(p -> next != NULL)
 {
 p = p -> next;
 }
 p -> next = t;
 p = p -> next;
 p -> info = item;
 p -> next = NULL;
 }
 }
 
 void rotate46(struct node46 * head, int k)
 {
     if (k == 0)
         return;
     struct node46* curr = head;
     int count = 1;
     while (count < k && curr != NULL) {
         curr = curr -> next;
         count++;
     }
     if (curr == NULL)
         return;
     struct node46* temp = curr;
     while (curr -> next != NULL)
         curr = curr -> next;
     curr -> next = head;
     head = temp -> next;
     temp -> next = NULL;
     start = head;
 }

 void traverse46(struct node46 * t)
 {
 if(t == NULL)
 {
             printf(" Linked list is empty\n");
                                     }
                                     while(t -> next != NULL)
                                     {
                         printf("%d ->  ",t -> info);
                         t = t -> next;
                         }
                         printf("%d\n",t -> info);
 }

 int assg4prog6()
 {
     int k;
     printf("Enter the value of k:");
     scanf("%d",&k);
     add46(4);
     add46(8);
     add46(12);
     add46(16);
     add46(20);
     add46(24);
     add46(28);
     add46(32);
     printf("Given Linked List: \n");
     traverse46(start);
     rotate46(start,k);
     printf("Linked List after rotating: \n");
     traverse46(start);
     return 0;
 } 