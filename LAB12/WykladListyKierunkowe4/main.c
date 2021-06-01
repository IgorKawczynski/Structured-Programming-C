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

//FUNKCJA DDK -- DODAJ ELEMENT NA KONIEC
struct element* ddk(struct element* Lista, int a){

    struct element* wsk;
    if(Lista==NULL)
    {
        Lista=wsk=malloc(sizeof(struct element));

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

int main()
{
    struct element* Lista_bez_glowy = stworz_Liste();
    Lista_bez_glowy=ddk(Lista_bez_glowy, 4);
    Lista_bez_glowy=ddk(Lista_bez_glowy, -7);
    wyswietl_Liste_Bez_Glowy2(Lista_bez_glowy);





    printf("Hello world!\n");
    return 0;
}
