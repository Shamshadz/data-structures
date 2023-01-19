#include <stdio.h>

typedef struct Marks
{
    int roll_no;
    char name[100];
    float chem_marks;
    float maths_marks;
    float phy_marks;

}marks;


int main() {
    int n = 5;
    marks student[n];
    
    for (int i = 0; i < n; i++)
    {
        printf("Enter the student[%d]  roll_no: ",i);
        scanf("%d", &student[i].roll_no);
        printf("Enter the student[%d] name: ",i);
        scanf("%s", &student[i].name);
        printf("Enter the student[%d] marks in chem_marks out of 100: ",i);
        scanf("%f", &student[i].chem_marks);
        printf("Enter the student[%d] marks in maths_marks out of 100: ",i);
        scanf("%f", &student[i].maths_marks);
        printf("Enter the student[%d] marks in phy_marks out of 100: ",i);
        scanf("%f", &student[i].phy_marks);
    }

    for (int i = 0; i < n; i++)
    {
        float percentage = (student[i].chem_marks + student[i].maths_marks + student[i].phy_marks)/3;
        printf("\n");
        printf("student[%d] name: %s\n", i,student[i].name);
        printf("student[%d] roll_no: %d\n", i,student[i].roll_no);
        printf("Precentge of the student[%d] out of 300: %f\n", i, percentage);
    }   
  
  return 0;
}