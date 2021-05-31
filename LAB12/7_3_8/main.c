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


struct element* usunw(struct element*Lista, struct element*elem)
{
    struct element*wsk=malloc(sizeof(struct element));
    struct element*wsk2=malloc(sizeof(struct element));
    if(Lista==NULL)
    {
        return NULL;
    }
    wsk=Lista;
    if(Lista==elem)
    {
        Lista=Lista->next;
        free(wsk);
    }
    else
    {
       while((wsk->next!=NULL)&&(wsk->next!=elem))
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
    lista1=usunw(lista1, lista1->next->next);
    wyswietlListeBezGlowy(lista1);
    lista1=usunw(lista1, lista1->next);
    wyswietlListeBezGlowy(lista1);

    return 0;
}
