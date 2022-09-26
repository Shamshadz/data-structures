#include <stdio.h>
#include <stdlib.h>

typedef struct stack
{
    int size;
    char *a;
    int top;
} stack;

int isop(char c)
{
    if (c == '+' || c == '/' || c == '-' || c == '*' || c == '(')
    {
        return 1;
    }
    return 0;
}

int prec(char c)
{
    if (c == '*' || c == '/')
    {
        return 2;
    }
    else if (c == '+' || c == '-')
    {
        return 1;
    }
}
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

void display(stack *s)
{
    for (int i = s->top; i >= 0; i--)
    {
        printf("%d ", s->a[i]);
    }
    printf("\n");
}

char stop(stack *s)
{
    int x = s->top;
    return s->a[x];
}

char *in_post(char *s)
{
    stack *a1 = malloc(sizeof(stack));
    a1->size = 100;
    a1->a = malloc(a1->size * sizeof(char));
    a1->top = -1;
    int i = 0;
    int j = 0;
    char* ans = malloc(50*sizeof(char));
    while (s[j] != '\0')
    {
        if (isop(s[j]) == 0)
        {
            ans[i] = s[j];
            // printf("%c\n",s[i]);
            i++;
            j++;
        }
        else if (s[j] == ')')
        {
            while (stop(a1) != '(')
            {
                ans[i] = pop(a1);
                i++;
            }
            j++;
            char y = pop(a1);
        }
        else if ((isEmpty(a1) == 1) || prec(s[i]) < prec(stop(a1)))
        {
            push(a1, s[j]);
            // printf("%c",s[i]);
            j++;
        }
        else
        {
            ans[i] = pop(a1);
            // printf("%c",ans[i]);
            i++;
        }
    }
    while (!(isEmpty(a1)))
    {
        ans[i] = pop(a1);
        i++;
    }

    return ans;
}

char *rev(char *s)
{
    int i = 0;
    stack *s1 = malloc(sizeof(stack));
    s1->size = 100;
    s1->a = malloc(s1->size * sizeof(char));
    s1->top = -1;

    while (s[i] != '\0')
    {
        push(s1, s[i]);

        i++;
    }
    i = 0;
    while (!(isEmpty(s1)))
    {

        s[i] = pop(s1);
        // printf("%c",s[i]);
        i++;
    }
    s[i] = '\0';
    // printf("%s",s);
    return s;
}

char *prefix(char *s)
{
    char *a = malloc(100 * sizeof(char));
    a = rev(s);

    a = in_post(a);

    a = rev(a);

    return a;
}

int main()
{
    char s[50];
    char* a = malloc(50*sizeof(char));
    printf("ENTER A EXPRESSION: ");
    scanf("%s", s);
    a = prefix(s);
    printf("YOUR PREFIX EXPRESSION IS %s\n",a);
    return 0;
}
