// program to concatenate two strings using pointer
#include <stdio.h>

int stringCompare(char *str1, char *str2){
    int flag = 1;
    while(*str1 != '\0' && *str2 != '\0'){
        if(*str1 != *str2){
            flag = 0;
        }
        str1++;
        str2++;
    }
    return flag;
}

int main()
{
    char s[100], s1[100];

    printf("\nEnter the first string 1: ");
    gets(s);   

    printf("\nEnter the second string 2: ");
    gets(s1);  

    int compare = stringCompare(s,s1);

    if(compare == 0){
        printf("Strings are not Equal");
    }
    else{
        printf("Strings are Equal");
    }

   return 0;
}