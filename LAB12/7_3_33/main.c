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


struct element* Lista_bez_Glowy_przesun(struct element*Lista)
{
    struct element* temp=Lista;
    if( (Lista==NULL) || (Lista->next==NULL) )
        return Lista;

    while(Lista->next->next!=NULL)
    {
        Lista=Lista->next;
    }
    Lista->next->next=temp;
    temp=Lista->next;
    Lista->next=NULL; //zakoczenie listy
    return temp;

};

struct element* Lista_z_Glowa_przesun(struct element*Lista)
{
    struct element* temp=Lista->next;
    if( (Lista==NULL) || (Lista->next==NULL) )
        return Lista;
    while(Lista->next->next!=NULL)
    {
        Lista=Lista->next;
    }
    Lista->next->next=temp;
    temp=Lista->next;
    Lista->next=NULL;
    return temp;

};



int main()
{
    struct element* lista1=Lista_bez_Glowy_utworz();
    lista1=Lista_bez_Glowy_dodajk(lista1, 6);
    lista1=Lista_bez_Glowy_dodajk(lista1, 4);
    lista1=Lista_bez_Glowy_dodajk(lista1, 2);
    lista1=Lista_bez_Glowy_dodajk(lista1, 89);
    lista1=Lista_bez_Glowy_dodajk(lista1, 1);
    lista1=Lista_bez_Glowy_dodajk(lista1, 23);
    Lista_bez_Glowy_wyswietl(lista1);


    struct element* lista3=Lista_bez_Glowy_przesun(lista1);
    Lista_bez_Glowy_wyswietl(lista3);


    struct element* lista4=Lista_z_Glowa_utworz();
    Lista_z_Glowa_dodajk(lista4, 3);
    Lista_z_Glowa_dodajk(lista4, 25);
    Lista_z_Glowa_dodajk(lista4, 43);
    Lista_z_Glowa_dodajk(lista4, 3);
    Lista_z_Glowa_dodajk(lista4, -2);
    Lista_z_Glowa_dodajk(lista4, 66);
    Lista_z_Glowa_wyswietl(lista4);

    struct element* lista6=Lista_z_Glowa_przesun(lista4);
    Lista_bez_Glowy_wyswietl(lista6);

    return 0;
}
