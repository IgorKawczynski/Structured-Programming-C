#include <stdio.h>
#include <stdlib.h>

struct element{

    int i;
    struct element* next;

};

//DLA LISTY Z GLOWA
struct element* stworz_Liste(){

    struct element* wsk=malloc(sizeof(struct element));
    wsk->next=NULL;
    return wsk;

}

//bez zmiennej
void wyswietl_Liste_z_Glowa2(struct element* Lista){

    if(Lista==NULL)
    {
        printf("Lista jest pusta\n");
    }
    while(Lista->next!=NULL)
    {
        Lista=Lista->next;
        printf("%d\n", Lista->i);
    }
    printf("---\n");

}

//FUNKCJA DDK -- DODAJ ELEMENT NA KONIEC -- w przypadku glowy nie trzeba zwracac
void ddk(struct element* Lista, int a){

    struct element* wsk=malloc(sizeof(struct element));
    wsk->i=a;
    wsk->next=Lista->next;
    Lista->next=wsk;

}

int main()
{
//    //pusta lista z glowa
//    struct element* Lista_z_Glowa=malloc(sizeof(struct element));
//    Lista_z_Glowa->next=NULL;
//    wyswietl_Liste_z_Glowa(Lista_z_Glowa);
//    struct element* wsk1 = malloc(sizeof(struct element));
//    wsk1->i=4;
//    wsk1->next=NULL;           //ten sam schemat jak bez glowy
//    Lista_z_Glowa->next=wsk1;
//    wyswietl_Liste_z_Glowa(Lista_z_Glowa);

    //albo 2gi sposob jak poprzednio z dodawaniem kolejnych elementow
//    struct element* Lista_z_Glowa=malloc(sizeof(struct element));
//    Lista_z_Glowa->next=malloc(sizeof(struct element));
//    Lista_z_Glowa->next->i=4;
//    Lista_z_Glowa->next->next=malloc(sizeof(struct element));
//    Lista_z_Glowa->next->next->i=11;
//    Lista_z_Glowa->next->next->next=NULL;
//    wyswietl_Liste_z_Glowa(Lista_z_Glowa);

    //ALBO POPRZEZ FUNKCJE
    struct element* Lista_z_Glowa=stworz_Liste();
    ddk(Lista_z_Glowa, 4);
    ddk(Lista_z_Glowa, -7);
    ddk(Lista_z_Glowa, 11);
    ddk(Lista_z_Glowa, 24);
    wyswietl_Liste_z_Glowa2(Lista_z_Glowa);

    return 0;
}
