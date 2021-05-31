#include <stdio.h>
#include <stdlib.h>

struct element
{
    int i;
    struct element * next;
};

struct element* utworz()
{
    struct element*temp=malloc(sizeof(struct element));
    temp->next=NULL;
    return temp;
};

void dodajw(struct element*Lista, struct element*elem, int a)
{
    struct element*wsk=malloc(sizeof(struct element));
    wsk->i=a;
    wsk->next=elem->next;
    elem->next=wsk;
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
        printf("%d\n",temp->i);
        temp=temp->next;
    }
    printf("----\n");
}

int main()
{
    struct element*lista1=utworz();
    wyswietlListeZGlowa(lista1);
    dodajw(lista1, lista1, 2);
    wyswietlListeZGlowa(lista1);
    dodajw(lista1, lista1->next, -4);
    dodajw(lista1, lista1->next->next, 45);
    wyswietlListeZGlowa(lista1);
    dodajw(lista1, lista1->next->next, 214);
    dodajw(lista1, lista1->next->next, -3);
    wyswietlListeZGlowa(lista1);
    return 0;
}
