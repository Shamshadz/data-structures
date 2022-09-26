#include<stdio.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct stack
{
    int size;
    char *a;
    int top;
} stack;
void push(stack *s, char ele)
{
    s->top++;
    if (s->top >= s->size)
    {
        printf("STACK OVERFLOW\n\n");
        s->top--;
    }
    else
    {

        s->a[s->top] = ele;
    }
}

char pop(stack *s)
{
    if (s->top == -1)
    {
        printf("STACK IS EMPTY. \n\n");
        return -1;
    }
    else
    {
        char x = s->a[s->top];
        s->top--;
        return x;
    }
}

int isFull(stack *s)
{
    if (s->top >= s->size)
    {
        return 1;
    }
    return 0;
}

int isEmpty(stack *s)
{
    if (s->top == -1)
    {
        return 1;
    }
    return 0;
}
char* rev(char* s){
    int i=0;
    stack* s1 = malloc(sizeof(stack));
    s1->size = 100;
    s1->a = malloc(s1->size*sizeof(char));
    s1->top = -1;
    
    while (s[i]!='\0')
    {
        push(s1,s[i]);

        i++;
    }
    i =0;
    while (!(isEmpty(s1)))
    {

       s[i] = pop(s1); 
       //printf("%c",s[i]);
       i++;
    }
    s[i] = '\0';
    //printf("%s",s);
    return s;
}
int main(){
    char s[50];
    char* a = malloc(50*sizeof(char));
    printf("ENTER A STRING: \n");
    scanf("%s",s);
     a = rev(s);
     printf("REVERSED STRING IS %s\n",a);
return 0;
}