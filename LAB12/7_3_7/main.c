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


struct element* usun1(struct element*Lista, int a)
{
    struct element*wsk=malloc(sizeof(struct element));
    struct element*wsk2=malloc(sizeof(struct element));
    if(Lista==NULL)
    {
        return NULL;
    }
    wsk=Lista;
    if(Lista->i==a)
    {
        Lista=Lista->next;
        free(wsk);
    }
    else
    {
       while((wsk->next!=NULL)&&(wsk->next->i!=a))
       {
           wsk=wsk->next;
       }
       if(wsk->next!=NULL)
       {
           wsk2=wsk->next;
           wsk->next=wsk2->next;
           free(wsk2);
       }
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
    lista1=usun1(lista1, 111);
    wyswietlListeBezGlowy(lista1);
    lista1=usun1(lista1, 4);
    wyswietlListeBezGlowy(lista1);
    lista1=usun1(lista1, -2);
    wyswietlListeBezGlowy(lista1);
    lista1=usun1(lista1, -2);
    wyswietlListeBezGlowy(lista1);

    return 0;
}
