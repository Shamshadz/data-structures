// Question number 9
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
struct customer
{
    char name[20];
    int accnum;
    int balance;
};
void checkbalance(struct customer *);
void maxbalance(struct customer *);
int main()
{
    int i;
    struct customer c[5];
    for (i = 0; i < 3; i++)
    {
        printf("\nEnter the name of the customer-%d : ", i + 1);
        gets(c[i].name);
        fflush(stdin);
        printf("\nEnter the account number of customer-%d :", i + 1);
        scanf("%d", &c[i].accnum);
        fflush(stdin);
        printf("\nEnter the balance of account of customer-%d : ", i + 1);
        scanf("%d", &c[i].balance);
        fflush(stdin);
    }
    printf("\n***************NAMES OF CUSTOMERS HAVING BALANCE<200Rs**************\n");
    checkbalance(c);
    printf("\n*****************NAMES OF CUSTOMERS HAVING BALANCE > 1000Rs and their names*********************\n");
    maxbalance(c);
    return 0;
}
void checkbalance(struct customer c1[])
{
    for (int i = 0; i < 3; i++)
        if (c1[i].balance < 200)
            printf("%s\n", c1[i].name);
}
void maxbalance(struct customer c1[])
{
    for (int i = 0; i < 3; i++)
        if (c1[i].balance > 1000)
            printf("%s : %d/-Rs\n", c1[i].name, (c1[i].balance + 100));
}