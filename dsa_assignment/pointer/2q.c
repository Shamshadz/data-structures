#include <stdio.h>

int add(int *p1, int *p2){
    return *p1 + *p2;
}

int main()
{
    int a = 33, b = 23;
    int *p1, *p2;

    int sum = add(&a,&b);

    printf("Sum of (%d) and (%d): %d\n", a, b, sum);

   return 0;
}