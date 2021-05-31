#include <stdio.h>
#include <stdlib.h>

struct element
{
    int i;
    struct element* next;

};

struct element* utworz()
{
    struct element* wsk=malloc(sizeof(struct element));
    wsk->next=NULL;
    return wsk;

};

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

void dnp(struct element* Lista, int a)
{
    struct element* wsk=malloc(sizeof(struct element));
    wsk->i=a;
    wsk->next=Lista->next;
    Lista->next=wsk;
}

void wyczysc(struct element* Lista)
{
    struct element* wsk1=Lista->next;
    struct element* temp=Lista->next;
    while(temp!=NULL)
    {
        temp=temp->next;
        free(wsk1);
        wsk1=temp;
    }
    Lista->next=NULL;
}

int main()
{

    struct element*lista1=utworz();
    wyswietlListeZGlowa(lista1);
    dnp(lista1,2);
    wyswietlListeZGlowa(lista1);
    dnp(lista1,-4);
    dnp(lista1,45);
    wyswietlListeZGlowa(lista1);
    wyczysc(lista1);
    wyswietlListeZGlowa(lista1);
    return 0;
}
