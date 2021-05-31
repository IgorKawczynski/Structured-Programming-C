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

struct element* dodaj(struct element*Lista, int a)
{
    struct element*wsk=malloc(sizeof(struct element));
    wsk->i=a;
    wsk->next=Lista;
    return wsk;
}

struct element* wyczysc(struct element*Lista)
{
    struct element*wsk=Lista;
    while(Lista!=NULL)
    {
        Lista=Lista->next;
        free(wsk);
        wsk=Lista;
    }
    Lista=NULL;
    return Lista;
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
    lista1=wyczysc(lista1);
    wyswietlListeBezGlowy(lista1);
    return 0;
}
