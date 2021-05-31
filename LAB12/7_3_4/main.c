#include <stdio.h>
#include <stdlib.h>

struct element
{
    int i;
    struct element * next;
};

struct element* utworz()
{
    return NULL;
};


struct element* dodajk(struct element*Lista, int a)
{
    struct element*wsk;
    if(Lista==NULL)
    {
        wsk=malloc(sizeof(struct element));
        Lista=wsk;
    }
    else
    {
       wsk=Lista;
       while(wsk->next!=NULL)
       {
           wsk=wsk->next;
       }
       wsk->next=malloc(sizeof(struct element));
       wsk=wsk->next;
    }
    wsk->i=a;
    wsk->next=NULL;
    return Lista;
}

void wyswietlListeBezGlowy(struct element*Lista)
{
    if(Lista==NULL)
    {
        printf("Lista jest pusta\n");
    }
    while(Lista!=NULL)
    {
        printf("%d\n",Lista->i);
        Lista=Lista->next;
    }
    printf("----\n");
}

int main()
{
    struct element*lista1=utworz();
    wyswietlListeBezGlowy(lista1);
    lista1=dodaj(lista1,4);
    wyswietlListeBezGlowy(lista1);
    lista1=dodaj(lista1,-2);
    wyswietlListeBezGlowy(lista1);
    lista1=dodaj(lista1,-2);
    lista1=dodaj(lista1,111);
    wyswietlListeBezGlowy(lista1);
    lista1=dodajk(lista1, -76);
    lista1=dodajk(lista1,-94);
    wyswietlListeBezGlowy(lista1);
    return 0;
}
