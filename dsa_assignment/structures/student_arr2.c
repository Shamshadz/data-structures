#include <stdio.h>

typedef struct  student
{
    char name[100];
    int rollno;
    int age;
    int marks;
    char add[500];
}stud;


int main() {
    int n = 15; 
    stud student[n];

    for(int i = 0; i<n; i++){
        printf("Enter the name of student[%d]: ",i);
        scanf("%s", &student[i].name);
        printf("\nEnter the rollno: ");
        scanf("%d", &student[i].rollno);
        printf("\nEnter the Age: ");
        scanf("%d", &student[i].age);
        printf("\nEnter the Marks: ");
        scanf("%d", &student[i].marks);
        printf("\nEnter the Address: ");
        scanf("%s", &student[i].add);
    }
    

    for(int i = 0; i<n; i++){
        printf("Name of student%d is %s\n", i ,student[i].name);
        printf("Roll No. of student%d is %d\n", i ,student[i].rollno);
        printf("Age of student%d is %d\n", i ,student[i].age);
        printf("Marks of student%d is %d\n", i ,student[i].marks);
        printf("Address of student%d is %d\n", i ,student[i].add);
        printf("\n");
    }
  
  return 0;
}