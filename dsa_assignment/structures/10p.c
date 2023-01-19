// 10.Write a program to compare two dates entered by user. Make a structure
// named date to store the elements day, month and year to store the dates. if the dates are equal,
// display "Dates are equal" otherwise display "Dates are not equal".
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
struct date
{
    int date1;
    int month1;
    int year1;
    int date2;
    int month2;
    int year2;
};
int main()
{
    struct date d;
    printf("Enter the date 1 in format of DD/MM/YYYY : ");
    scanf("%d%d%d", &d.date1, &d.month1, &d.year1);
    printf("\nEnter the date 2 in format of DD/MM/YYYY : ");
    scanf("%d%d%d", &d.date2, &d.month2, &d.year2);
    if (d.date1 == d.date2 && d.month1 == d.month2 && d.year1 == d.year2)
        printf("\n\nDates are equal");
    else
        printf("\n\nDates are not equal");
    return 0;
}