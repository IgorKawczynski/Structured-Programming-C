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

struct element* dodaj(struct element*Lista, int a)
{
    struct element*wsk=malloc(sizeof(struct element));
    wsk->i=a;
    wsk->next=Lista;
    return wsk;
}

void dodaj2(struct element**Lista, int a)
{
    struct element*wsk=malloc(sizeof(struct element));
    wsk->i=a;
    wsk->next=*Lista;
    *Lista=wsk;
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
        printf("%d\n",temp->i);
        temp=temp->next;
    }
    printf("----\n");
}

void wyswietlListeBezGlowy2(struct element*Lista)
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
    wyswietlListeBezGlowy2(lista1);
    lista1=dodaj(lista1,4);
    wyswietlListeBezGlowy2(lista1);
    lista1=dodaj(lista1,-2);
    wyswietlListeBezGlowy2(lista1);
    lista1=dodaj(lista1,-2);
    lista1=dodaj(lista1,111);
    wyswietlListeBezGlowy2(lista1);
    struct element*lista2=utworz();
    wyswietlListeBezGlowy(lista2);
    dodaj2(&lista2,4);
    wyswietlListeBezGlowy(lista2);
    dodaj2(&lista2,-2);
    wyswietlListeBezGlowy(lista2);
    dodaj2(&lista2,-2);
    dodaj2(&lista2,111);
    wyswietlListeBezGlowy(lista2);
    return 0;
}
