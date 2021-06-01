#include <stdio.h>
#include <stdlib.h>

union Liczba
{
    float wymierna;
    int calkowita;

};

struct Dane
{
    int tp;
    union Liczba zaw;
};

struct Dane wczytaj()
{
    struct Dane temp;
    printf("WYPISZ 0 JESLI calkowita, WYPISZ 1 JESLI wymierna \n");
    scanf("%d",&temp.tp);
    if (temp.tp==0)
    {
        printf("wpisz liczbe calkowita\n");
        scanf("%d",&temp.zaw.calkowita);
    }
    else if (temp.tp==1)
    {
        printf("wpisz liczbe wymierna\n");
        scanf("%f",&temp.zaw.wymierna);
    }
    return temp;
}

void wyswietl(struct Dane dane1)
{
    if(dane1.tp==1)
        printf("%f ", dane1.zaw.wymierna);
    if(dane1.tp==0)
        printf("%d ", dane1.zaw.calkowita);
}

int main()
{
    struct Dane dane_1 = wczytaj();
    wyswietl(dane_1);

    return 0;
}
