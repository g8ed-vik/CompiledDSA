#include<stdio.h>
#include<stdlib.h>


struct node58
{
	int data;
	struct node58* next;
};

void printMiddle58(struct node58 *head)
{
	struct node58 *slow_ptr = head;
	struct node58 *fast_ptr = head;

	if (head!=NULL)
	{
		while (fast_ptr != NULL && fast_ptr->next != NULL)
		{
			fast_ptr = fast_ptr->next->next;
			slow_ptr = slow_ptr->next;
		}
		printf("The middle element is [%d]\n\n", slow_ptr->data);
	}
}

void push58(struct node58** head_ref, int new_data)
{
	
	struct node58* new_node58 =
		(struct node58*) malloc(sizeof(struct node58));

	
	new_node58->data = new_data;


	new_node58->next = (*head_ref);


	(*head_ref) = new_node58;
}


void printList58(struct node58 *ptr)
{
	while (ptr != NULL)
	{
		printf("%d->", ptr->data);
		ptr = ptr->next;
	}
	printf("NULL\n");
}


int assg5prog8()
{
	
	struct node58* head = NULL;
	int i;

	for (i=5; i>0; i--)
	{
		push58(&head, i);
		printList58(head);
		printMiddle58(head);
	}

	return 0;
}