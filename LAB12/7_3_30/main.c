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


struct element* Lista_bez_Glowy_doklej(struct element*Lista1, struct element*Lista2)
{
    struct element* temp;
    if(Lista1==NULL)
        return Lista2;
    temp=Lista1;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=Lista2;
    return Lista1;

};

struct element* Lista_z_Glowa_doklej(struct element*Lista1, struct element*Lista2)
{
    struct element* temp;
    if(Lista1->next==NULL)
        return Lista2;
    temp=Lista1->next;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=Lista2->next;
    return Lista1->next;

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
    struct element* lista2=Lista_bez_Glowy_utworz();
    lista2=Lista_bez_Glowy_dodajk(lista2, 21);
    lista2=Lista_bez_Glowy_dodajk(lista2, 56);
    lista2=Lista_bez_Glowy_dodajk(lista2, 55);
    lista2=Lista_bez_Glowy_dodajk(lista2, 434);
    lista2=Lista_bez_Glowy_dodajk(lista2, -32);
    lista2=Lista_bez_Glowy_dodajk(lista2, 79);
    lista2=Lista_bez_Glowy_dodajk(lista2, 98);
    Lista_bez_Glowy_wyswietl(lista2);

    struct element* lista3=Lista_bez_Glowy_doklej(lista1, lista2);
    Lista_bez_Glowy_wyswietl(lista3);


    struct element* lista4=Lista_z_Glowa_utworz();
    Lista_z_Glowa_dodajk(lista4, 3);
    Lista_z_Glowa_dodajk(lista4, 25);
    Lista_z_Glowa_dodajk(lista4, 43);
    Lista_z_Glowa_dodajk(lista4, 3);
    Lista_z_Glowa_dodajk(lista4, -2);
    Lista_z_Glowa_dodajk(lista4, 66);
    Lista_z_Glowa_wyswietl(lista4);
    struct element* lista5=Lista_z_Glowa_utworz();
    Lista_z_Glowa_dodajk(lista5, 212);
    Lista_z_Glowa_dodajk(lista5, 51);
    Lista_z_Glowa_dodajk(lista5, 4643);
    Lista_z_Glowa_dodajk(lista5, 321);
    Lista_z_Glowa_dodajk(lista5, -23);
    Lista_z_Glowa_dodajk(lista5, 44);
    Lista_z_Glowa_dodajk(lista5, 47);
    Lista_z_Glowa_wyswietl(lista5);

    struct element* lista6=Lista_z_Glowa_doklej(lista4, lista5);
    Lista_bez_Glowy_wyswietl(lista6);

    return 0;
}
