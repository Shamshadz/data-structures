#include <stdio.h>

typedef struct  student
{
    char name[100];
    int rollno;
    int age;
    int marks;
}stud;


int main() {
    int i = 5; 
    stud student[5];

    for(int i = 0; i<5; i++){
        printf("Enter the name of student[%d]: ",i);
        scanf("%s", &student[i].name);
        printf("\nEnter the rollno: ");
        scanf("%d", &student[i].rollno);
        printf("\nEnter the Age: ");
        scanf("%d", &student[i].age);
        printf("\nEnter the Marks: ");
        scanf("%d", &student[i].marks);
    }
    

    for(int i = 0; i<5; i++){
        printf("Name of student%d is %s\n", i ,student[i].name);
        printf("Roll No. of student%d is %d\n", i ,student[i].rollno);
        printf("Age of student%d is %d\n", i ,student[i].age);
        printf("Marks of student%d is %d\n", i ,student[i].marks);
        printf("\n");
    }
  
  return 0;
}