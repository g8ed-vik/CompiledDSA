#include<stdio.h>
#include<stdlib.h>
struct node52 {
    int data;
     struct node52* next;
     struct node52* prev;
};
void DinsertAtHead52(struct node52** head, int data)
{
    
    struct node52* node52 = (struct node52*)malloc(sizeof(struct node52));
    node52->data = data;
    node52->next = (*head);
    node52->prev = NULL;
 
    if ((*head) != NULL)
        (*head)->prev = node52;
 
    (*head) = node52;
}
void DinsertAtTail52(struct node52** head, int data){
    struct node52* new_node52 = (struct node52*)malloc(sizeof(struct node52));
 
    struct node52* last = *head; 
 
   
    new_node52->data = data;
 
    
    new_node52->next = NULL;
 
   
    if (*head == NULL) {
        new_node52->prev = NULL;
        *head = new_node52;
        return;
    }
 
    while (last->next != NULL)
        last = last->next;
 
    
    last->next = new_node52;
    new_node52->prev = last;
 
   
}
void printDDList52(struct node52* head)
{
    printf("The doubly linked list is : ");
    while (head != NULL) {
        printf("%d ",head->data);
        head = head->next;
    }
    printf("\n");
}
void reverseDD52( struct node52** head)
{
    
    struct node52 *temp = NULL; 
     struct node52 *current = *head;
     
     while (current !=  NULL)
     {
       temp = current->prev;
       current->prev = current->next;
       current->next = temp;             
       current = current->prev;
     }     
      
     
     if(temp != NULL )
        *head = temp->prev;
}


int assg5prog2(){
     struct node52* head = NULL;
    int n, num;
    printf("Enter the value of n \n");
    scanf("%d", &n);
    for( int i = 0 ; i<n ; i++){
    scanf("%d",&num);
        DinsertAtTail52(&head,num);
    }
    printf("ORIGINAL\n");
    printDDList52(head);
    reverseDD52(&head);
    printf("Reversed\n");
    printDDList52(head);

    
    return 0;
} //q2