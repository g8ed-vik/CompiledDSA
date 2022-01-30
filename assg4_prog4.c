#include <stdio.h>  
#include <stdbool.h>  
   
 
struct node44{  
    int data;  
    struct node44 *next;  
};      
   
  
struct node44 *head, *tail = NULL;  
int size = 0;  
   

void addnode44(int data) {  
     
    struct node44 *newnode44 = (struct node44*)malloc(sizeof(struct node44));  
    newnode44->data = data;  
    newnode44->next = NULL;  
      
   
    if(head == NULL) {  
     
        head = newnode44;  
        tail = newnode44;  
    }  
    else {  
         
        tail->next = newnode44;  
       
        tail = newnode44;  
    }  
      
    size++;  
}  
    
struct node44* reverseList(struct node44 *temp){  
    struct node44 *current = temp;  
    struct node44 *prevnode44 = NULL, *nextnode44 = NULL;  
      
    while(current != NULL){  
        nextnode44 = current->next;  
        current->next = prevnode44;  
        prevnode44 = current;  
        current = nextnode44;  
    }  
    return prevnode44;  
}  
   
void isPalindrome44(){  
    struct node44 *current = head;  
    bool flag = true;  
      
    
    int mid = (size%2 == 0)? (size/2) : ((size+1)/2);  
      
    
    for(int i=1; i<mid; i++){  
        current = current->next;  
    }  
      
    
    struct node44 *revHead = reverseList(current->next);  
   

    while(head != NULL && revHead != NULL){  
        if(head->data != revHead->data){  
            flag = false;  
            break;  
        }  
        head = head->next;  
        revHead = revHead->next;  
    }  
   
    if(flag)  
        printf("Given singly linked list is a palindrome\n");  
    else  
        printf("Given singly linked list is not a palindrome\n");  
}  
      

void display44() {  
  
    struct node44 *current = head;  
      
    if(head == NULL) {  
        printf("List is empty\n");  
        return;  
    }  
    printf("Nodes of singly linked list: \n");  
    while(current != NULL) {  
       
        printf("%d ", current->data);  
        current = current->next;  
    }  
    printf("\n");  
}  
      
int assg4prog4()  
{  
      
    addnode44(9);  
    addnode44(5);  
    addnode44(3);  
    addnode44(5);  
    addnode44(9);  
      
    display44();  
      
  
    isPalindrome44();  
      
    return 0;  
}