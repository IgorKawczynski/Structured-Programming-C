#include <stdio.h>
#include <stdlib.h>

struct student {

    char imie[20];
    char nazwisko[30];
    char adres[40];
    char pesel[11];
    char kierunek[25];
    char numer_legitymacji[20];

};

void wczytaj(struct student *skan){

    printf("Podaj imie : ");
    scanf("%s", skan->imie);
    printf("Podaj nazwisko : ");
    scanf("%s", skan->nazwisko);
    printf("Podaj adres : ");
    scanf("%s", skan->adres); //tylko do momentu spacji
    printf("Podaj pesel : ");
    scanf("%s", skan->pesel);
    printf("Podaj kierunek studiow : ");
    scanf("%s", skan->kierunek);
    printf("Podaj numer swojej legitymacji studenckiej : ");
    scanf("%s", skan->numer_legitymacji);

}

void wyswietl(struct student* st1)
{
    printf("\nDane osobowe :\n");
    printf("Imie : %s\n", st1->imie);
    printf("Nazwisko : %s\n", st1->nazwisko);
    printf("Adres : : %s\n", st1->adres);
    printf("Pesel : %s\n", st1->pesel);
    printf("Kierunek studiow : %s\n", st1->kierunek);
    printf("Nr. legitymacji : %s\n", st1->numer_legitymacji);
    printf(" ------ \n ");

}

int main()
{
    struct student Dane1[100];
    wczytaj(Dane1);
    wyswietl(Dane1);
    return 0;
}
