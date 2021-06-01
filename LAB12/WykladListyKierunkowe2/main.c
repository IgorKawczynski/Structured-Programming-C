#include <stdio.h>
#include <stdlib.h>

struct element{

    int i;
    struct element* next;

};
//ze zmienna, czytelniej
void wyswietl_Liste_Bez_Glowy(struct element* Lista){

    struct element* wsk = Lista;
    if(wsk==NULL)
    {
        printf("Lista jest pusta\n");
    }
    while(wsk!=NULL)
    {
        printf("%d\n", wsk->i);
        wsk=wsk->next;
    }
    printf("---\n");

}

//bez zmiennej
void wyswietl_Liste_Bez_Glowy2(struct element* Lista){

    if(Lista==NULL)
    {
        printf("Lista jest pusta\n");
    }
    while(Lista!=NULL)
    {
        printf("%d\n", Lista->i);
        Lista=Lista->next;
    }
    printf("---\n");

}


int main()
{
    //pusta lista bez glowy
    struct element* Lista_bez_glowy = NULL;
    wyswietl_Liste_Bez_Glowy2(Lista_bez_glowy);
    //dodanie elementu 4 na liste bez glowy
    struct element* wsk1 = malloc(sizeof(struct element));
    wsk1->i=4;
    wsk1->next = NULL;
    Lista_bez_glowy=wsk1;
    wyswietl_Liste_Bez_Glowy2(Lista_bez_glowy);
    //dodanie elementu -7 na koniec listy
    struct element* wsk2 = malloc(sizeof(struct element));
    wsk2->i=-7;
    wsk2->next = NULL;
    Lista_bez_glowy->next=wsk2; //pierwszy next
    wyswietl_Liste_Bez_Glowy2(Lista_bez_glowy);
    //dodanie elementu 11 na koniec listy
     struct element* wsk3 = malloc(sizeof(struct element));
    wsk3->i=11;
    wsk3->next = NULL;
    (Lista_bez_glowy->next)->next=wsk3; //znowu kolejny next musimy zrobic
    wyswietl_Liste_Bez_Glowy2(Lista_bez_glowy);
    //dodanie elementu 24 na koniec listy
     struct element* wsk4 = malloc(sizeof(struct element));
    wsk4->i=24;
    wsk4->next = NULL;
    Lista_bez_glowy->next->next->next=wsk4; //znowu kolejny next musimy zrobic // nawiasy mozna omijac, ze wzgledu na priorytet operacji
    wyswietl_Liste_Bez_Glowy2(Lista_bez_glowy);


    printf("Hello world!\n");
    return 0;
}
