#include<stdio.h>
#include<stdlib.h>

struct Stack{
    int size;
    int top;
    int *arr;
};

int isFUll(struct Stack *s){
    if(s->top==s->size-1){
        return 1;
    }
    return 0;
}

int isEmpty(struct Stack *s){
    if(s->top==-1){
        return 1;
    }
    return 0;
}

void push(struct Stack *s,int data){
    if(isFUll(s)){
        printf("Cannot push %d, stack is full\n",data);
    }else{
        s->top ++;
        s->arr[s->top] = data;
    }
}

int pop(struct Stack *s){
    if(isEmpty(s)){
        printf("Stack Underflow! Cannot pop from the stack\n");
        return -1;
    }
    else{
        int val = s->arr[s->top];
        s->top--;
        return val;
    }
}

int peek(struct Stack *s){
    if(isEmpty(s)){
        printf("Stack Underflow! Cannot pop from the stack\n");
        return -1;
    }
    else{
        int val = s->arr[s->top];
        return val;
    }
}

void display(struct Stack *s){
    for(int i=0;i<s->top+1;i++){
        printf("%d ",s->arr[s->top-i]);
    }
    printf("\n");
}

int main()
{   
    struct Stack *s = (struct Stack *)malloc(sizeof(struct Stack));
    s->size = 3;
    s->top = -1;
    s->arr = (int *)malloc(s->size*sizeof(int));

    push(s,1);
    push(s,2);
    push(s,3);
    
    display(s);

    if(isFUll(s)){
        printf("stack is Not full\n");
    }else{
        printf("stack is Full\n");
    }

    printf("Popped the %d Element\n",pop(s));
    printf("Peeked the %d Element\n",peek(s));
    display(s);

    return 0;
}