#include<stdio.h>

struct node56 {
  int data;
  struct node56 *next;
};
void print56(struct node56 *head){
    struct node56 *ptr;
    ptr=head;
    while(ptr->next!=head){
        printf("%d ",ptr->data);
        ptr=ptr->next;
    }
    printf("%d ",ptr->data);
    printf("\n");

}
void insert56(struct node56 **head,int num) {
    struct node56* newnode56 = (struct node56*) malloc(sizeof(struct node56));
    newnode56->data  = num;
    newnode56->next = *head;
    *head = newnode56;
}
 
void convertToCircularLL56(struct node56 *head){
    if(head == NULL){
        printf("Error\n");
    }
    struct node56 *temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
     
    temp->next = head;
}

int assg5prog6() {
    struct node56 *head=NULL;
    insert56(&head,1);  
    insert56(&head,2); 
    insert56(&head,3); 
    insert56(&head,4);
    insert56(&head,5);
    convertToCircularLL56(head);
    print56(head);
    return 0;
}