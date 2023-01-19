#include<stdio.h>
#include<stdlib.h>
#include <string.h>

struct Stack{
    int size;
    int top;
    char *arr;
};

int isFUll(struct Stack *sp){
    if(sp->top==sp->size-1){
        return 1;
    }
    return 0;
}

int isEmpty(struct Stack *sp){
    if(sp->top==-1){
        return 1;
    }
    return 0;
}

void push(struct Stack *sp,char data){
    if(isFUll(sp)){
        printf("Cannot push %s, stack is full\n",data);
    }else{
        sp->top ++;
        sp->arr[sp->top] = data;
    }
}

char pop(struct Stack *sp){
    if(isEmpty(sp)){
        printf("Stack Underflow! Cannot pop from the stack\n");
        return -1;
    }
    else{
        char val = sp->arr[sp->top];
        sp->top--;
        return val;
    }
}

int check_match(char a, char b){
    if(a=='{' && b=='}'){
        return 1;
    }
    if(a=='(' && b==')'){
        return 1;
    }
    if(a=='[' && b==']'){
        return 1;
    }
    return 0;
}

int parenthesisMatch(char *exp){
    struct Stack *sp;
    sp->size = strlen(exp);
    sp->top = -1;
    sp->arr = (char *)malloc(sp->size*sizeof(char));

    for(int i=0;i<sp->size;i++){
        
        if(exp[i]=='(' || exp[i]=='{' || exp[i]=='['){
            push(sp, exp[i]);
        }
        else if(exp[i]==')' || exp[i]=='}' || exp[i]==']'){
            char popped_ch = pop(sp);
            if(popped_ch!=-1){
                if(check_match(popped_ch,exp[i])){
                    continue;
                }else{
                // printf("expression is unBalanced\n");
                    return 0;
                }     
            }else{
                // printf("expression is unBalanced\n");
                return 0;
            }
        }
    }
    
    if(isEmpty(sp)){
        // printf("expression is Balanced\n");
        return 1;
    }
}

int main()
{   char *exp = "[[4-6]((8){(9-8])})";

    if(parenthesisMatch(exp)){
        printf("expression is Balanced\n");
    }else{
        printf("expression is unBalanced\n");
    }

    return 0;
}