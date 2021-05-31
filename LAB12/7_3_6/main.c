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


struct element* dodaj(struct element*Lista, int a)
{
    struct element*wsk=malloc(sizeof(struct element));
    wsk->i=a;
    wsk->next=Lista;
    return wsk;
}


struct element* znajdz1(struct element*Lista, int a)
{
    struct element*wsk=malloc(sizeof(struct element));
    if(Lista==NULL)
    {
        return NULL;
    }
    else
    {
       wsk=Lista;
       while((wsk!=NULL)&&(wsk->i!=a))
       {
            wsk=wsk->next;

       }
       Lista=wsk;
    }
    return Lista;
}

struct element* znajdz2(struct element*Lista, int a)
{
    while((Lista!=NULL)&&(Lista->i!=a))
    {
        Lista=Lista->next;
    }
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
    lista1=znajdz1(lista1, -2);
    wyswietlListeBezGlowy(lista1);
//    lista1=znajdz2(lista1, -2);
//    wyswietlListeBezGlowy(lista1);

    return 0;
}
