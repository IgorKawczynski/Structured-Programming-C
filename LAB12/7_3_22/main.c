#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct trojkat
{
    float a,b,c;
    float pole;
};

struct element
{
    struct trojkat i;
    struct element*next;
};

float area(double a, double b, double c)
{
    double p=(a+b+c)/2;
    return sqrt(p*(p-a)*(p-b)*(p-c));
}

//wersja bez glowy
void pole(struct element*Lista)
{
    struct element*wsk=Lista;
    while(wsk!=NULL)
    {
        wsk->i.pole=area(wsk->i.a,wsk->i.b,wsk->i.c);
        wsk=wsk->next;
    }
}

void wyswietlListeBezGlowy(struct element*Lista)
{
    struct element*temp=Lista;
    if(temp==NULL)
    {
        printf("Lista jest pusta\n");
    }
    while(temp!=NULL)
    {
        printf("%f  %f  %f  %f \n", temp->i.a, temp->i.b, temp->i.c, temp->i.pole);
        temp=temp->next;
    }
    printf("-----\n");
}

//wersja z glowa
void pole2(struct element*Lista)
{
    struct element*wsk=Lista->next;
    while(wsk!=NULL)
    {
        wsk->i.pole=area(wsk->i.a,wsk->i.b,wsk->i.c);
        wsk=wsk->next;
    }
}

void wyswietlListeZGlowa(struct element*Lista)
{
    struct element*temp=Lista->next;
    if(temp==NULL)
    {
        printf("Lista jest pusta\n");
    }
    while(temp!=NULL)
    {
        printf("%f %f %f %f\n",temp->i.a,temp->i.b,temp->i.c,temp->i.pole);
        temp=temp->next;
    }
    printf("----\n");
}

int main()
{
    struct element * l2 = malloc(sizeof(struct element));
    struct trojkat t1 = {.a=3,.b=4,.c=5};
    l2->i=t1;
    l2->next=malloc(sizeof(struct element));
    struct trojkat t2 = {.a=2.3,.b=2.3,.c=4.5};
    l2->next->i=t2;
    l2->next->next=malloc(sizeof(struct element));
    struct trojkat t3 = {.a=5,.b=12,.c=13};
    l2->next->next->i=t3;
    l2->next->next->next=NULL;
    pole(l2);
    wyswietlListeBezGlowy(l2);
    struct element * l3 = malloc(sizeof(struct element));
    l3->next=malloc(sizeof(struct element));
    struct trojkat t2a = {.a=2.3,.b=2.3,.c=4.5};
    l3->next->i=t2a;
    l3->next->next=malloc(sizeof(struct element));
    struct trojkat t3a = {.a=5,.b=12,.c=13};
    l3->next->next->i=t3a;
    l3->next->next->next=NULL;
    pole(l3);
    wyswietlListeZGlowa(l3);
    return 0;
}
