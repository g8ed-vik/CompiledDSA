#include <stdio.h>

#include <stdlib.h>

struct BST

{

int data;

struct BST *left;

struct BST *right;

};

typedef struct BST NODE;

NODE *node;

NODE* createtree(NODE *node, int data)

{

if (node == NULL)

{

NODE *temp;

temp= (NODE*)malloc(sizeof(NODE));

temp->data = data;

temp->left = temp->right = NULL;

return temp;

}

if (data < (node->data))

{

node->left = createtree(node->left, data);

}

else if (data > node->data)

{

node -> right = createtree(node->right, data);

}

return node;

}

NODE* search(NODE *node, int data)

{

if(node == NULL)

printf("\nElement not found");

else if(data < node->data)

{

node->left=search(node->left, data);

}

else if(data > node->data)

{

node->right=search(node->right, data);

}

else

printf("\nElement found is: %d", node->data);

return node;

}

void inorder(NODE *node)

{

if(node != NULL)

{

inorder(node->left);

printf("%d\t", node->data);

inorder(node->right);

}

}

void preorder(NODE *node)

{

if(node != NULL)

{

printf("%d\t", node->data);

preorder(node->left);

preorder(node->right);

}

}

void postorder(NODE *node)

{

if(node != NULL)

{

postorder(node->left);

postorder(node->right);

printf("%d\t", node->data);

}

}

NODE* findMin(NODE *node)

{

if(node==NULL)

{

return NULL;

}

if(node->left)

return findMin(node->left);

else

return node;

}

NODE* findMax(NODE *node){
 if(node==NULL)

{

return NULL;
if(node->right)

return findMax(node->right);

else

return node;

}
}

NODE* del(NODE *node, int data)

{

NODE *temp;

if(node == NULL)

{

printf("\nElement not found");

}

else if(data < node->data)

{

node->left = del(node->left, data);

}

else if(data > node->data)

{

node->right = del(node->right, data);

}

else

{ /* Now We can delete this node and replace with either minimum element in the right sub tree or maximum element in the left subtree */

if(node->right && node->left)

{ /* Here we will replace with minimum element in the right sub tree */

temp = findMin(node->right);

node -> data = temp->data;

/* As we replaced it with some other node, we have to delete that node */

node -> right = del(node->right,temp->data);

}

else

{



temp = node;

if(node->left == NULL)

node = node->right;

else if(node->right == NULL)

node = node->left;

free(temp); 

}

}

return node;

}

void assg10prog1()

{

int data, ch, i, n;

NODE *root=NULL;

while (1)

{

printf("\n 0. Quit\n 1. Create\n 2. In-Order Traversal \n 3. Pre-Order Traversal \n 4. Post-Order traversal \n 5. Search\n 6. Find Smallest Element\n 7. Find Largest Element\n 8. Deletion of Tree\n");
       printf("ENTER ");
       printf("YOUR ");
       printf("CHIOCE : \n");

scanf("%d", &ch);

switch (ch)

{
case 0 : exit(0);
case 1: printf("\nEnter N value: " );

scanf("%d", &n);

printf("\nEnter the values to create BST like(6,9,5,2,8,15,24,14,7,8,5,2)\n");

for(i=0; i<n; i++)

{

scanf("%d", &data);

root=createtree(root, data);

}

break;

case 2: printf("\nInorder Traversal: \n");

inorder(root);

break;

case 3: printf("\nPreorder Traversal: \n");

preorder(root);

break;

case 4: printf("\nPostorder Traversal: \n");

postorder(root);

break;

case 5: printf("\nEnter the element to search: ");

scanf("%d", &data);

root=search(root, data);

break;

case 6: printf("\nThe Smallest Element in the BST is : %d \n",findMin(root)->data);
break;

case 7 : printf("\nThe Largest Element in the BST is : %d \n",findMax(root)->data);

break;

case 8: printf("\nEnter the element to be  deleted: ");

scanf("%d", &data);

root=del(root, data);

break;

default:printf("\nWrong option");

break;

}

}

}