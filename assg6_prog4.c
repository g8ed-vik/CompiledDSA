#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Stack64 { 
    int top; 
    int maxSize;
    int* array; 
}; 

struct Stack64* create(int max) 
{ 
    struct Stack64* Stack64 = (struct Stack64*)malloc(sizeof(struct Stack64)); 
    Stack64->maxSize = max; 
    Stack64->top = -1; 
    Stack64->array = (int*)malloc(Stack64->maxSize * sizeof(int));
    return Stack64; 
} 

int isFull64(struct Stack64* Stack64) 
{ 
    if(Stack64->top == Stack64->maxSize - 1){
        printf("Will not be able to push maxSize reached\n");
    }
    return Stack64->top == Stack64->maxSize - 1; 
} 

int isEmpty64(struct Stack64* Stack64) 
{ 
    return Stack64->top == -1; 
}

void push64(struct Stack64* Stack64, int item) 
{ 
    if (isFull64(Stack64)) 
        return; 
    Stack64->array[++Stack64->top] = item; 
}

int pop64(struct Stack64* Stack64) 
{ 
    if (isEmpty64(Stack64)) 
        return INT_MIN; 
    return Stack64->array[Stack64->top--]; 
} 

int peek64(struct Stack64* Stack64) 
{ 
    if (isEmpty64(Stack64)) 
        return INT_MIN; 
    return Stack64->array[Stack64->top]; 
} 

int checkIfOperand64(char ch) 
{ 
    return (ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'); 
} 

int precedence64(char ch) 
{ 
    switch (ch) 
    { 
    case '+': 
    case '-': 
        return 1; 

    case '*': 
    case '/': 
        return 2; 

    case '^': 
        return 3; 
    } 
    return -1; 
} 


int getPostfix64(char* expression) 
{ 
    int i, j; 

    
    struct Stack64* Stack64 = create(strlen(expression)); 
    if(!Stack64) 
        return -1 ; 

    for (i = 0, j = -1; expression[i]; ++i) 
    { 
         
        if (checkIfOperand64(expression[i])) 
            expression[++j] = expression[i]; 

            else if (expression[i] == '(') 
            push64(Stack64, expression[i]); 
            else if (expression[i] == ')') 
        { 
            while (!isEmpty64(Stack64) && peek64(Stack64) != '(') 
                expression[++j] = pop64(Stack64); 
            if (!isEmpty64(Stack64) && peek64(Stack64) != '(') 
                return -1;               
            else
                pop64(Stack64); 
        } 
        else 
        { 
            while (!isEmpty64(Stack64) && precedence64(expression[i]) <= precedence64(peek64(Stack64))) 
                expression[++j] = pop64(Stack64); 
            push64(Stack64, expression[i]); 
        } 

    } 

    while (!isEmpty64(Stack64)) 
        expression[++j] = pop64(Stack64); 

    expression[++j] = '\0'; 
    
}

void reverse64(char *exp){

    int size = strlen(exp);
    int j = size, i=0;
    char temp[size];

    temp[j--]='\0';
    while(exp[i]!='\0')
    {
        temp[j] = exp[i];
        j--;
        i++;
    }
    strcpy(exp,temp);
}
void brackets64(char* exp){
    int i = 0;
    while(exp[i]!='\0')
    {
        if(exp[i]=='(')
            exp[i]=')';
        else if(exp[i]==')')
            exp[i]='(';
        i++;
    }
}
void InfixtoPrefix64(char *exp){

    int size = strlen(exp);

   
    reverse64(exp);
   
    brackets64(exp);
   
    getPostfix64(exp);
   
    reverse64(exp);
}

int assg6prog4()
{    
    printf("The infix is: ");

    char expression[] = "((a/b)+c)-(d+(e*f))"; 
    printf("%s\n",expression);
    InfixtoPrefix64(expression); 

    printf("The prefix is: ");
    printf("%s\n",expression);

    return 0; 
}