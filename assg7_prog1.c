#include <stdio.h>
#define MAX71 6
typedef struct
{
    int data[MAX71];
    int top;
} STACK;

int push(STACK *s, int v)
{
    if (s->top == MAX71 - 1)
    {
        return 1;
    }
    s->top++;
    s->data[s->top] = v;
    return 0;
}
int pop(STACK *s, int *v)
{
    if (s->top == -1)
    {
        return 1;
    }
    *v = s->data[s->top];
    s->top--;
    return 0;
}

int isEmpty(STACK s)
{
    if (s.top == -1)
        return 1;
    else
        return 0;
}

void insSort(STACK *s, int v)
{
    if (isEmpty(*s))
        push(s, v);
    else
    {
        int d;
        pop(s, &d);
        if (d > v)
        {
            insSort(s, v);
            push(s, d);
        }
        else
        {
            push(s, d);
            push(s, v);
        }
    }
}
void sort(STACK *s)
{
    if (!isEmpty(*s))
    {
        int d;
        pop(s, &d);
        sort(s);
        insSort(s, d);
    }
}

void init(STACK *s)
{
    s->top = -1;
}
int peekLow(STACK *s)
{
    if (s->top == -1)
        return 1;
    int v;
    int min = s->top[s->data];
    for (int i = MAX71 - 1; i >= 0; i--)
    {
        if (s->data[i] > min)
        {
            pop(s, &v);
        }
        else
        {
            min = s->data[i];
            push(s, v);
        }
    }
    return min;
}
int peekHigh(STACK *s)
{
    if (s->top == -1)
        return 1;
    int v;
    int max = s->top[s->data];
    for (int i = MAX71 - 1; i >= 0; i--)
    {
        if (s->data[i] < max)
        {
            pop(s, &v);
        }
        else
        {
            max = s->data[i];
            push(s, v);
        }
    }
    return max;
}
int peekMiddle(STACK *s)
{
    int mid, v;
    sort(s);
    if (s->top == -1)
        return 1;
    mid = s->data[(MAX71 / 2)];
    for (int i = 1; i <= MAX71 - 1; i++)
    {
        if (s->data[i] != mid)
        {
            pop(s, &v);
        }
        else
        {
            mid = s->data[i];
            push(s, v);
            return mid;
        }
    }
}
int assg7prog1()
{
    int b;
    STACK s1;
    init(&s1);
    int k = push(&s1, 12);
    k = push(&s1, 7);
    k = push(&s1, 13);
    k = push(&s1, 41);
    k = push(&s1, 15);
    k = push(&s1, 23);
    int p = peekMiddle(&s1);
    printf("The middle peeked element is %d\n", p);
     int n = peekHigh(&s1);
    printf("The largest peeked element is %d\n", n);
    int m = peekLow(&s1);
    printf("The smallest peeked element is %d\n", m);
    return 0;
}