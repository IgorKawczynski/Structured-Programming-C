#include <stdio.h>
#include <stdlib.h>

struct element
{
    int i;
    struct element * next;
};



struct element* Lista_bez_Glowy_utworz()
{
    return NULL;
};



struct element* Lista_bez_Glowy_dodajk(struct element*Lista, int a)
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



void Lista_bez_Glowy_wyswietl(struct element*Lista)
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



struct element* Lista_z_Glowa_utworz()
{
    struct element*temp=malloc(sizeof(struct element));
    temp->next=NULL;
    return temp;
};



void Lista_z_Glowa_dodajk(struct element*Lista, int a)
{
    struct element*wsk=Lista;
    while(wsk->next!=NULL)
    {
        wsk=wsk->next;
    }
    wsk->next=malloc(sizeof(struct element));
    wsk=wsk->next;
    wsk->i=a;
    wsk->next=NULL;
}



void Lista_z_Glowa_wyswietl(struct element*Lista)
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


int Lista_bez_Glowy_suma(struct element*Lista)
{
    int suma=0;
    while(Lista!=NULL)
    {
        suma=suma+Lista->i;
        Lista=Lista->next;
    }
    return suma;
}


int Lista_z_Glowa_suma(struct element*Lista)
{
    int suma=0;
    while(Lista->next!=NULL)
    {
        suma=suma+Lista->next->i;
        Lista=Lista->next;
    }
    return suma;
}


int main()
{
    struct element* lista1=Lista_bez_Glowy_utworz();
    lista1=Lista_bez_Glowy_dodajk(lista1, 6);
    lista1=Lista_bez_Glowy_dodajk(lista1, 4);
    lista1=Lista_bez_Glowy_dodajk(lista1, 2);
    lista1=Lista_bez_Glowy_dodajk(lista1, 89);
    lista1=Lista_bez_Glowy_dodajk(lista1, -14);
    lista1=Lista_bez_Glowy_dodajk(lista1, 23);
    Lista_bez_Glowy_wyswietl(lista1);
    struct element* lista2=Lista_z_Glowa_utworz();
    Lista_z_Glowa_dodajk(lista2, 3);
    Lista_z_Glowa_dodajk(lista2, 25);
    Lista_z_Glowa_dodajk(lista2, 43);
    Lista_z_Glowa_dodajk(lista2, 1);
    Lista_z_Glowa_dodajk(lista2, -15);
    Lista_z_Glowa_dodajk(lista2, 66);
    Lista_z_Glowa_wyswietl(lista2);
    printf("SUMA LISTY1 : %d \n", Lista_bez_Glowy_suma(lista1));
    printf("SUMA LISTY2 : %d \n", Lista_z_Glowa_suma(lista2));

    return 0;
}
