// program to concatenate two strings using pointer
#include <stdio.h>


int main()
{
    char s[100], s1[100];

    printf("\nEnter the first string: ");
    gets(s);   

    printf("\nEnter the second string to be concatenated: ");
    gets(s1);  

    printf("\nBefore concatenate Strings 1: ");
    printf("%s", s);
    printf("\nBefore concatenate Strings 2: ");
    printf("%s", s1);

    char *str = s;
    char *str1 = s1;

    while(*str){
        str++;
    }
    while(*str1){
        *str = *str1;
        str++;
        str1++;
    }
    *str = '\0';

    printf("\nConcatenated Strings is: ");
    printf("%s", s);

   return 0;
}