#include <stdio.h>
 
// Function to return multiple values using pointers
void initialize(int *a, int *b, char *c)
{
    *a = 310;
    *b = 210;
    *c = 'A';
}
 
int main(void)
{
    int a, b;
    char c;
 
    initialize(&a, &b, &c);
    printf("a = %d, b = %d, c = %c", a, b, c);
 
    return 0;
}