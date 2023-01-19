#include <stdio.h>

typedef struct  student
{
    char name[100];
    int rollno;
    int age;
    int marks;
}stud;


int main() {

    stud student1;
    printf("Enter the name of student: ");
    
    gets(student1.name);
    student1.rollno = 17;
    student1.age = 21;
    student1.marks = 50;

    printf("Name of student1 is %s\n", student1.name);
    printf("Roll No. of student1 is %d\n", student1.rollno);
    printf("Age of student1 is %d\n", student1.age);
    printf("Marks of student1 is %d\n", student1.marks);  
  
  return 0;
}
