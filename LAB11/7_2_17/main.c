#include <stdio.h>
#include <stdlib.h>

enum Plec
{
    mezczyzna, kobieta
};


enum mezczyzna
{
    wolny, zonaty
};


enum kobieta
{
    wolna, mezatka
};


union czlowiek
{
    enum mezczyzna m;
    enum kobieta k;
};


struct dane_osobowe {

    char imie[20];
    char nazwisko[30];
    enum Plec plec;
    union czlowiek stan_cywilny;
};

void wczytaj(struct dane_osobowe tab[], int n){
    int i;
    int d;
    for(i=0; i<n; i++)
    {
        printf("Wczytujemy dane kobiety (1) czy mezczyzny (2) ?\n");
        scanf("%d", &d);
        if(d==1)
            tab[i].plec=kobieta;
        else
            tab[i].plec=mezczyzna;
        printf("Podaj imie : ");
        scanf("%s", tab[i].imie);
        printf("Podaj nazwisko : ");
        scanf("%s", tab[i].nazwisko);
        printf("Podaj swoj stan cywilny, ");
        if(tab[i].plec==kobieta)
        {
            printf("wypisz 0 jesli wolna, wpisz 1 jesli mezatka");
        }
        else
        {
            printf("wypisz 0 jesli wolny, 1 jesli zonaty");
        }
        scanf("%d", &tab[i].stan_cywilny.k);
    }

}


void wyswietl(struct dane_osobowe Osoba[], int n){

    for(int i=0; i<n; i++)
    {
        printf("\nDane osoby nr%d : \n", i+1);
        printf("Imie: %s\n", Osoba[i].imie);
        printf("Nazwisko: %s\n", Osoba[i].nazwisko);
        printf("Plec: %d\n", Osoba[i].plec);
        if(Osoba[i].plec==kobieta)
            printf("Stan cywilny: %s\n", Osoba[i].stan_cywilny.k);
        else
            printf("Stan cywilny: %s\n", Osoba[i].stan_cywilny.m);

    }
}

int main()
{
    struct dane_osobowe Osoba1[2];
    wczytaj(Osoba1, 2);
    wyswietl(Osoba1, 2);
    return 0;
}
