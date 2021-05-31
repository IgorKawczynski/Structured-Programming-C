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

//version 1                                   //previous element
struct element* dodajw(struct element*Lista, struct element*elem, int a)
{
    struct element*wsk;
    if(elem==NULL)
    {
        wsk=malloc(sizeof(struct element));
        wsk->next=Lista;
        Lista=wsk;
    }
    else
    {
       wsk=malloc(sizeof(struct element));
       wsk->next=elem->next;
       elem->next=wsk;
    }
    return Lista;
}

                                                //previous element
struct element* dodajw2(struct element*Lista, struct element*elem, int a)
{
    struct element*wsk=malloc(sizeof(struct element));  //firstly creating an additional element
    wsk->i=a;
    if(elem==NULL)              //if list is empty ( if previous element is 0 )
    {
        wsk->next=Lista;        //then additional element is on front of the list
        Lista=wsk;
    }
    else
    {
       wsk->next=elem->next;    //else after our previous element(wsk) is additional element (elem)
       elem->next=wsk;          //after additional element is wsk
    }
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
    printf("%d ", lista1->next->i);
    lista1=dodajw2(lista1, lista1->next, -66);
    wyswietlListeBezGlowy(lista1);
    lista1=dodajw2(lista1, lista1->next->next->next, -245);
    wyswietlListeBezGlowy(lista1);
    lista1=dodajw2(lista1, lista1, -695);
    wyswietlListeBezGlowy(lista1);
    return 0;
}
