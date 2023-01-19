#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Stack
{
    int size;
    int top;
    char *arr;
};

int isFUll(struct Stack *sp)
{
    if (sp->top == sp->size - 1)
    {
        return 1;
    }
    return 0;
}

int isEmpty(struct Stack *sp)
{
    if (sp->top == -1)
    {
        return 1;
    }
    return 0;
}

void push(struct Stack *sp, char data)
{
    if (isFUll(sp))
    {
        printf("Cannot push %s, stack is full\n", data);
    }
    else
    {
        sp->top++;
        sp->arr[sp->top] = data;
    }
}

char pop(struct Stack *sp)
{
    if (isEmpty(sp))
    {
        printf("Stack Underflow! Cannot pop from the stack\n");
        return -1;
    }
    else
    {
        char val = sp->arr[sp->top];
        sp->top--;
        return val;
    }
}

char stackTop(struct Stack *sp){
    return sp->arr[sp->top];
}

int precedence(char ch){
    if(ch == '*' || ch == '/'){
        return 3;
    }
    else if(ch == '+' || ch == '-'){
        return 2;
    }
    else{
        return 0;
    }
}

int isOperator(char ch){
    if(ch == '*' || ch == '/' || ch == '+' || ch == '-'){
        return 1;
    }
    else{
        return 0;
    }
}

char *infixToPostfix(char *infix)
{
    struct Stack *sp = (struct Stack *)malloc(sizeof(struct Stack));
    sp->top = -1;
    sp->size = strlen(infix);
    sp->arr = (char *)malloc(sp->size * sizeof(char));
    char *postfix = (char *)malloc(strlen(infix) + 1 * sizeof(char));

    int i = 0;
    int j = 0;
    while (infix[i] != '\0')
    {

        if (!isOperator(infix[i]))
        {
            postfix[j] = infix[i];
            i++;
            j++;
        }
        else
        {
            if (precedence(infix[i]) > precedence(stackTop(sp)))
            {
                push(sp, infix[i]);
                i++;
            }
            else
            {
                postfix[j] = pop(sp);
                j++;
            }
        }
    }

    while (!isEmpty(sp))
    {
        postfix[j] = pop(sp);
        j++;
    }
    postfix[j] = '\0';
    return postfix;
}

int main()
{
    char *infix = "x-y/z-k*d";
    
    printf("postfix expression is %s", infixToPostfix(infix));

    return 0;
}