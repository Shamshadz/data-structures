// 8.Write a structure to store the roll no. , name , age(between 11 to 14) and
// address of students (more than 10). Store the information of the students.
// 1-Write a function to print the names of all the students having age 14.
// 2-Write another function to print the names of all the students having even roll no.
// 3-Write another function to display the details of the student whose roll no, is given.
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
struct student
{
    int roll;
    char name[20];
    int age;
    char address[30];
};
int checkage(int);
int checkroll(int);
int main()
{
    int i;
    struct student s[5];
    for (i = 0; i < 5; i++)
    {
        printf("\n\n\nEnter the roll no. of student-%d: ", i + 1);
        scanf("%d", &s[i].roll);
        fflush(stdin);
        printf("\nEnter the name of the student-%d  : ", i + 1);
        gets(s[i].name);
        fflush(stdin);
        printf("\nEnter the age of the student-%d : ", i + 1);
        scanf("%d", &s[i].age);
        fflush(stdin);
        printf("\nEnter the address of the student-%d : ", i + 1);
        gets(s[i].address);
    }
    printf("\n***********Students having age 14 :******************\n");
    for (i = 0; i < 5; i++)
    {

        if (checkage(s[i].age))
        {
            printf("%s \n", s[i].name);
        }
    }
    printf("\n****************Students having even roll no. :*******************\n");
    for (i = 0; i < 5; i++)
    {

        if (checkroll(s[i].roll))
        {
            printf("%s \n", s[i].name);
        }
    }
    printf("\n*****************Details of all students :**********************\n");
    for (i = 0; i < 5; i++)
    {
        printf("\n\nROLL No. : %d \nNAME : %s \nAGE : %d \nADDRESS : %s ", s[i].roll, s[i].name, s[i].age, s[i].address);
    }
    return 0;
}
int checkage(int age)
{
    for (int i = 0; i < 5; i++)
    {
        if (age == 14)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
}
int checkroll(int roll)
{
    if (roll % 2 == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
