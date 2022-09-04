#include <stdio.h>

int main()
{
    int a = 33, b = 22;
    int *p1 = &a, *p2 = &b;

    printf("Before swapping (a = %d) and (b = %d)\n", a, b);

    int temp;
    temp = *p2;
    *p2 = *p1;
    *p1 = temp;

    printf("After swapping (a = %d) and (b = %d)\n", a, b);

   return 0;
}