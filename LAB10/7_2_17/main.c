#include <stdio.h>
#include <stdlib.h>

struct dane_osobowe {

    char imie[20];
    char nazwisko[30];
    int plec;
    char stan_cywilny[15];
};

void wczytaj(struct dane_osobowe tab[], int n){

    for(int i=0; i<n; i++)
    {
        printf("Wypisz ,,1'' jeœli kobieta | Wypisz ,,0'' jesli mezczyzna\n");
        scanf("%d", &tab[i].plec);
        printf("Podaj imie : ");
        scanf("%s", tab[i].imie);
        printf("Podaj nazwisko : ");
        scanf("%s", tab[i].nazwisko);
        printf("Podaj swoj stan cywilny, ");
        if(tab[i].plec==1)
        {
            printf("wypisz : [wolna] lub [mezatka] ");
            scanf("%s", tab[i].stan_cywilny);
        }

        else
        {
            printf("wypisz : [wolny] lub [zonaty] ");
            scanf("%s", tab[i].stan_cywilny);
        }
    }

}


void wyswietl(struct dane_osobowe Osoba[], int n){

    for(int i=0; i<n; i++)
    {
        printf("\nDane osoby nr%d : \n", i+1);
        printf("Imie: %s\n", Osoba[i].imie);
        printf("Nazwisko: %s\n", Osoba[i].nazwisko);
        printf("Plec: %d\n", Osoba[i].plec);
        printf("Stan cywilny: %s\n", Osoba[i].stan_cywilny);

    }




}

int main()
{
    struct dane_osobowe Osoba1[2];
    wczytaj(Osoba1, 2);
    wyswietl(Osoba1, 2);
    return 0;
}
