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

struct element* stworz_Liste(){

    return NULL;

}


//  DODANIE ELEMENTOW W INNY SPOSOB
int main()
{
    //pusta lista bez glowy
    struct element* Lista_bez_glowy = stworz_Liste();
    wyswietl_Liste_Bez_Glowy2(Lista_bez_glowy);
    //dodanie elementu 4 na liste bez glowy
    Lista_bez_glowy=malloc(sizeof(struct element));
    Lista_bez_glowy->i=4;
    //dodanie elementu -7 na koniec listy
    Lista_bez_glowy->next=malloc(sizeof(struct element));
    Lista_bez_glowy->next->i=-7;
    //dodanie elementu 11 na koniec listy
    Lista_bez_glowy->next->next=malloc(sizeof(struct element));
    Lista_bez_glowy->next->next->i=11;
    //dodanie elementu 24 na koniec listy
    Lista_bez_glowy->next->next->next=malloc(sizeof(struct element));
    Lista_bez_glowy->next->next->next->i=24;
    //zakonczenie, nadanie ostatniemu elementowi NULL
    Lista_bez_glowy->next->next->next->next=NULL;
    wyswietl_Liste_Bez_Glowy2(Lista_bez_glowy);




    printf("Hello world!\n");
    return 0;
}
