//polynomial expressions and operations
#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
    int coe;
    int man;
    struct node *next;
}NODE;
typedef struct poly
{
    NODE *st;
}POLY;
void init(POLY *t)
{
    t->st=NULL;
}
NODE* createNode(int c,int m)
{
    NODE *a;
    a = (NODE*)malloc(sizeof(NODE));
    a->coe=c;
    a->man=m;
    a->next=NULL;
    return a;
}
void createPoly(POLY *t)
{
    int c,m;
    NODE *a,*b;
    printf("\nPolynomial Expression : ");
    while(1)
    {
        printf("\nCoe Man : ");
        scanf("%d %d",&c,&m);
        if(c==0 && m==0)
            break;
        if(t->st == NULL)
            t->st=a=createNode(c,m);
        else
        {
            if(m>=b->man)
            {
                printf("\nInvalid");
                continue;
            }
            a= createNode(c,m);
            b->next=a;
        }
        b=a;
    }
}
void displayPoly(POLY *t)
{
    NODE *a = t->st;
    if(a==NULL)
    {
        printf("\nEmpty List");
        return;
    }
    printf("\nPolynomial Expression : ");
    while(a!=NULL)
    {
        if(a->coe>0)
        {
            printf("+");
        }
        printf("%dX%d",a->coe,a->man);
        a=a->next;
    }
}
void delAll(POLY *t)
{
    NODE *a=t->st;
    while(t->st!=NULL)
    {
        t->st=a->next;
        free(a);
        a=t->st;
    }
}
POLY add(POLY *p,POLY *q)
{
    POLY r;
    init(&r);
    NODE *a = p->st,*b = q->st;
    NODE *c,*d;
    int co,ma;
    while(a!= NULL && b!=NULL )
    {
        if(a->man > b->man)
        {
            co = a->coe;
            ma = a->man;
            a= a->next;
        }
        else
        {
            if(b->man > a->man)
            {
                co =b->coe;
                ma = b->man;
                b= b->next;
            }
            else
            {
            co =a->coe+b->coe;
            ma = a->man;
            a=a->next;
            b= b->next;
        }
        }
        if(r.st == NULL)
            r.st = c = createNode(co,ma);
        else
        {
            c= createNode(co,ma);
            d->next=c;
        }
        d= c;
    } 
    while(a!=NULL)
    {
        c=createNode(a->coe,a->man);
        d->next=c;
        d=c;
        a=a->next;
    }
    while(b!=NULL)
    {
        c=createNode(b->coe,b->man);
        d->next=c;
        d=c;
        b=b->next;
    }
    return r;
}
POLY sub(POLY *p,POLY *q)
{
    POLY r;
    init(&r);
    NODE *a = p->st,*b = q->st;
    NODE *c,*d;
    int co,ma;
    while(a!= NULL && b!=NULL )
    {
        if(a->man > b->man)
        {
            co = a->coe;
            ma = a->man;
            a= a->next;
        }
        else
        {
            if(b->man > a->man)
            {
                co =b->coe*-1;
                ma = b->man;
                b= b->next;
            }
            else
            {
            co =a->coe-b->coe;
            ma = a->man;
            a=a->next;
            b= b->next;
        }
        }
        if(r.st == NULL)
            r.st = c = createNode(co,ma);
        else
        {
            c= createNode(co,ma);
            d->next=c;
        }
        d= c;
    } 
    while(a!=NULL)
    {
        c=createNode(a->coe,a->man);
        d->next=c;
        d=c;
        a=a->next;
    }
    while(b!=NULL)
    {
        c=createNode(b->coe*-1,b->man);
        d->next=c;
        d=c;
        b=b->next;
    }
    return r;
}
POLY mul(POLY *p,POLY *q)
{
    POLY r;
    int co,ma;
    NODE *a=p->st,*b=q->st;
    NODE *c,*d,*e,*f;
    init(&r);
    while(b!=NULL)
    {
        a=p->st;
        while(a!=NULL)
        {
            co = a->coe*b->coe;
            ma =a->man+b->man;
            if(r.st == NULL)
                r.st = c= d = createNode(co,ma);
            else
            {
                if(ma<d->man)
                {
                    c = createNode(co,ma);
                    d->next=c;
                    d=c;
                }
                else
                {
                    e=r.st;
                    while(e!=NULL)
                    {
                        if(e->man==ma)
                        {
                            e->coe+=co;
                            break;
                        }
                        else
                        {
                            if(ma>e->man)
                            {
                                c=createNode(co,ma);
                                f->next=c;
                                c->next=e;
                                break;
                            }
                        }
                        f=e;
                        e=e->next;
                    }
                }
            }
            a=a->next;
        }
        b=b->next;
    }
    return r;
}
int main()
{
    POLY a,b,c;
    int opt;
    init(&a);
    init(&b);
    init(&c);
    while(1)
    
    {
        printf("\nMenu\n1.Create Polynomial 1\n2.Create polynomial 2\n3.display1\n4.display 2\n5.display 3\n6.add\n7.subtract\n8.multiply\nexit\noption : ");
        scanf("%d",&opt);
        if(opt>8)
            break;
        switch(opt)
        {
            case 1:
                delAll(&a);
                createPoly(&a);
                break;
            case 2:
                delAll(&b);
                createPoly(&b);
                break;
            case 3:
                displayPoly(&a);
                break;
            case 4:
                displayPoly(&b);
                break;
            case 5:
                displayPoly(&c);
                break;
            case 6:
                delAll(&c);
                c=add(&a,&b);
                break;
            case 7:
                delAll(&c);
                c= sub(&a,&b);
                break;
            case 8:
                delAll(&c);
                c=mul(&a,&b);
                break;
        }
    }
    return 0;
}
