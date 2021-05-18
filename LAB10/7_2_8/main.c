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

int main()
{
    struct student Dane1[100];
    wczytaj(Dane1);
    printf("\nPodane dane osobowe : \n");
    printf("Imie : %s\n\n", Dane1->imie);
    printf("Nazwisko : %s\n\n", Dane1->nazwisko);
    printf("Adres : %s\n\n", Dane1->adres);
    printf("Pesel : %s\n\n", Dane1->pesel);
    printf("Kierunek : %s\n\n", Dane1->kierunek);
    printf("Numer Legitymacji : %s\n\n", Dane1->numer_legitymacji);
    return 0;
}
