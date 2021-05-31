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

void dodaj(struct element*Lista, int a)
{
    struct element*wsk=malloc(sizeof(struct element));
    wsk->i=a;
    wsk->next=Lista->next;
    Lista->next=wsk;
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
    dodaj(lista1,2);
    wyswietlListeZGlowa(lista1);
    dodaj(lista1,-4);
    dodaj(lista1,45);
    wyswietlListeZGlowa(lista1);
    return 0;
}
