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
    wyswietl_Liste_Bez_Glowy(Lista_bez_glowy);
    //dodanie elementu 4 na liste bez glowy
    struct element* wsk1 = malloc(sizeof(struct element));
    wsk1->i=4;
    wsk1->next = NULL;
    Lista_bez_glowy=wsk1;
    wyswietl_Liste_Bez_Glowy(Lista_bez_glowy);
    //pusta lista z glowa
    struct element* Lista_z_glowa = malloc(sizeof(struct element));
    Lista_z_glowa->next = NULL;
    printf("Hello world!\n");
    return 0;
}
