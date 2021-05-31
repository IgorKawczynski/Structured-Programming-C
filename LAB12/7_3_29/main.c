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


struct element* Lista_bez_Glowy_kopia(struct element*Lista)
{
    struct element* kopia;
    struct element* temp;
    if(Lista==NULL)
        return NULL;
    kopia=malloc(sizeof(struct element));
    temp=kopia;
    temp->i=Lista->i;
    Lista=Lista->next;
    while(Lista!=NULL)
    {
        temp->next=malloc(sizeof(struct element));
        temp=temp->next;
        temp->i=Lista->i;
        Lista=Lista->next;
    }
    temp->next=NULL;
    return kopia;

};

struct element* Lista_z_Glowa_kopia(struct element*Lista)
{
    struct element* kopia;
    struct element* temp;
    if(Lista->next==NULL)
        return NULL;
    kopia=malloc(sizeof(struct element));
    temp=kopia;
    temp->i=Lista->next->i;
    Lista=Lista->next;
    while(Lista!=NULL)
    {
        temp->next=malloc(sizeof(struct element));
        temp=temp->next;
        temp->i=Lista->i;
        Lista=Lista->next;
    }
    temp->next=NULL;
    return kopia;

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
    struct element* lista2=Lista_z_Glowa_utworz();
    Lista_z_Glowa_dodajk(lista2, 3);
    Lista_z_Glowa_dodajk(lista2, 25);
    Lista_z_Glowa_dodajk(lista2, 43);
    Lista_z_Glowa_dodajk(lista2, 3);
    Lista_z_Glowa_dodajk(lista2, -2);
    Lista_z_Glowa_dodajk(lista2, 66);
    Lista_z_Glowa_wyswietl(lista2);

    struct element* kopia1=Lista_bez_Glowy_kopia(lista1);
    struct element* kopia2=Lista_z_Glowa_kopia(lista2);

    Lista_bez_Glowy_wyswietl(kopia1);
    Lista_z_Glowa_wyswietl(kopia2);


    return 0;
}
