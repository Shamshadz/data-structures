#include <stdio.h>

int main()
{

    int i;

    int *p;

    p = &i;

    i = 2;

    printf("Value of i: %d\n",i);
    printf("Address of i: %d\n",&i);

    printf("Value of i: %d\n",*p);
    printf("Address of i: %d",p);

   return 0;
}