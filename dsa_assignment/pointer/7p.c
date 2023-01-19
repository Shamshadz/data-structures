#include <stdio.h>

void swap(char **p1, char **p2){
    char *temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}

int main()
{
    char *string1 = "Shamshad";
    char *string2 = "raju";

    printf("\nBefore swapping Strings 1: ");
    printf("%s", string1);
    printf("\nBefore swapping Strings 2: ");
    printf("%s", string2);

    swap(&string1,&string2);

    printf("\nAfter swapping Strings 1: ");
    printf("%s", string1);
    printf("\nAfter swapping Strings 2: ");
    printf("%s", string2);

   return 0;
}