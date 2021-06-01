#include <stdio.h>
#include <stdlib.h>

struct element
{
    double i;
    struct element * next;
};


struct element* Lista_bez_Glowy_utworz()
{
    return NULL;
};


struct element* Lista_bez_Glowy_dodajk(struct element*Lista, double a)
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
        printf("%lf\n",Lista->i);
        Lista=Lista->next;
    }
    printf("----\n");
}


struct element* Lista_bez_Glowy_kasuj_ujemne(struct element*Lista)
{
    struct element*wsk=malloc(sizeof(struct element));
    if(Lista==NULL)
    {
        return NULL;
    }
    wsk=Lista;
       while((Lista!=NULL))
       {
           if(Lista->i < 0)
           {
               if(wsk!=0)
                  {
                      wsk->next=Lista->next;
                  }
                else
                {
                    wsk=Lista->next;
                }

            struct element*wsk2=Lista;
            Lista=Lista->next;
            free(wsk2);
           }
           else
           {
               wsk=Lista;
               Lista=Lista->next;
           }
       }
    return Lista;
}

int main()
{
    struct element* lista1=Lista_bez_Glowy_utworz();
    lista1=Lista_bez_Glowy_dodajk(lista1, 6.21);
    lista1=Lista_bez_Glowy_dodajk(lista1, -4.5);
    lista1=Lista_bez_Glowy_dodajk(lista1, 2);
    lista1=Lista_bez_Glowy_dodajk(lista1, 0);
    lista1=Lista_bez_Glowy_dodajk(lista1, 89.1);
    lista1=Lista_bez_Glowy_dodajk(lista1, -14);
    lista1=Lista_bez_Glowy_dodajk(lista1, 23);
    lista1=Lista_bez_Glowy_dodajk(lista1, -23);
    lista1=Lista_bez_Glowy_dodajk(lista1, 23);
    lista1=Lista_bez_Glowy_dodajk(lista1, -214.5133);
    Lista_bez_Glowy_wyswietl(lista1);
    Lista_bez_Glowy_kasuj_ujemne(lista1);
    Lista_bez_Glowy_wyswietl(lista1);


    return 0;
}
