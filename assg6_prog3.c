// C program to convert infix expression to postfix


// Stack type
struct Stack
{
	int top;
	unsigned capacity;
	int* array;
};

// Stack Operations
struct Stack* createStack( unsigned capacity )
{
	struct Stack* stack = (struct Stack*)
		malloc(sizeof(struct Stack));

	if (!stack)
		return NULL;

	stack->top = -1;
	stack->capacity = capacity;

	stack->array = (int*) malloc(stack->capacity *
								sizeof(int));

	return stack;
}
int qqq(struct Stack* stack)
{
	return stack->top == -1 ;
}
char peek(struct Stack* stack)
{
	return stack->array[stack->top];
}
char ooo(struct Stack* stack)
{
	if (!qqq(stack))
		return stack->array[stack->top--] ;
	return '$';
}
void eee(struct Stack* stack, char op)
{
	stack->array[++stack->top] = op;
}


// A utility function to check if
// the given character is operand
int isOperand(char ch)
{
	return (ch >= 'a' && ch <= 'z') ||
		(ch >= 'A' && ch <= 'Z');
}

// A utility function to return
// precedence of a given operator
// Higher returned value means
// higher precedence
int Prec(char ch)
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


// The main function that
// converts given infix expression
// to postfix expression.
int infixToPostfix(char* exp)
{
	int i, k;

	// Create a stack of capacity
	// equal to expression size
	struct Stack* stack = createStack(strlen(exp));
	if(!stack) // See if stack was created successfully
		return -1 ;

	for (i = 0, k = -1; exp[i]; ++i)
	{
		
		// If the scanned character is
		// an operand, add it to output.
		if (isOperand(exp[i]))
			exp[++k] = exp[i];
		
		// If the scanned character is an
		// ‘(‘, eee it to the stack.
		else if (exp[i] == '(')
			eee(stack, exp[i]);
		
		// If the scanned character is an ‘)’,
		// ooo and output from the stack
		// until an ‘(‘ is encountered.
		else if (exp[i] == ')')
		{
			while (!qqq(stack) && peek(stack) != '(')
				exp[++k] = ooo(stack);
			if (!qqq(stack) && peek(stack) != '(')
				return -1; // invalid expression			
			else
				ooo(stack);
		}
		else // an operator is encountered
		{
			while (!qqq(stack) &&
				Prec(exp[i]) <= Prec(peek(stack)))
				exp[++k] = ooo(stack);
			eee(stack, exp[i]);
		}

	}

	// ooo all the operators from the stack
	while (!qqq(stack))
		exp[++k] = ooo(stack );

	exp[++k] = '\0';
	printf( "%s", exp );
}

// Driver program to test above functions
int intopo()
{   
    int cv;
    printf( "Enter Size : " );
    scanf("%d",&cv);
    char exp[cv];
    printf( "Enter Expression : " );
    scanf("%s",exp);
	// char exp[] = "a+b*(c^d-e)^(f+g*h)-i";
	infixToPostfix(exp);
	return 0;
}
