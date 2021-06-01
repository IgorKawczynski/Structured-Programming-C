#include <stdio.h>
#include <stdlib.h>

struct element
{
    int x;
    struct element * next;
};


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
    wsk->x=a;
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
        printf("%d\n",temp->x);
        temp=temp->next;
    }
    printf("----\n");
}


int Lista_z_Glowa_iloczyn(struct element*Lista)
{
    int iloczyn=1;
    if(Lista==NULL)
        return 1;
    else
    {
        while(Lista->next!=NULL)
        {
            iloczyn=iloczyn*Lista->next->x;
            Lista=Lista->next;
        }
    }
    return iloczyn;
}


int main()
{

    struct element* lista2=Lista_z_Glowa_utworz();
    Lista_z_Glowa_dodajk(lista2, 3);
    Lista_z_Glowa_dodajk(lista2, 4);
    Lista_z_Glowa_dodajk(lista2, 1);
    Lista_z_Glowa_dodajk(lista2, 1);
    Lista_z_Glowa_dodajk(lista2, -2);
    Lista_z_Glowa_dodajk(lista2, 3);
    Lista_z_Glowa_wyswietl(lista2);
    printf("ILOCZYN LISTY : %d \n", Lista_z_Glowa_iloczyn(lista2));

    return 0;
}
