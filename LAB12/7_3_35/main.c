#include <stdio.h>
#include <stdlib.h>

struct element
{
    int i;
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


struct element* Lista_z_Glowa_minimum(struct element*Lista)
{
    struct element* min=Lista;
    while(Lista->next!=NULL)
    {
        if(Lista->next->i < min->next->i)
            min=Lista;
        Lista=Lista->next;
    }
    return min;
};

void sort_head(struct element*Lista)
{
    struct element* temp1;
    struct element* temp2;
    while(Lista->next!=NULL)
    {
        temp1=Lista_z_Glowa_minimum(Lista);
        if(temp1!=Lista)
        {
            temp2=temp1->next;
            temp1->next=temp2->next;
            temp2->next=Lista->next;
            Lista->next=temp2;
        }
        Lista=Lista->next;
    }
}


int main()
{

    struct element* lista4=Lista_z_Glowa_utworz();
    Lista_z_Glowa_dodajk(lista4, 3);
    Lista_z_Glowa_dodajk(lista4, 25);
    Lista_z_Glowa_dodajk(lista4, 43);
    Lista_z_Glowa_dodajk(lista4, 3);
    Lista_z_Glowa_dodajk(lista4, -2);
    Lista_z_Glowa_dodajk(lista4, 66);
    Lista_z_Glowa_wyswietl(lista4);

    sort_head(lista4);
    Lista_z_Glowa_wyswietl(lista4);

    return 0;
}
