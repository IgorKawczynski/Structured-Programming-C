#include <stdio.h>
#include <stdlib.h>

void wyswietl(int n, int m, int tab[n][m]){ //albo int **tab

    for(int i=0;i<n;i++)
    {

        for(int j=0; j<m; j++)
        {
            printf("[%d, %d] = %d     ", i, j, tab[i][j]);  //albo *(*(tab+i)+j)

        }
        printf("\n");
    }

}


int main()
{
    //TABLICA STATYCZNA - w trakcie programu nie mozna zmienic jej wymiaru // trafia na stos

    //deklaracja
    int tab[2][3] = { {1,2,4}, {-2,3,24} }; //[WIERSZE] [KOLUMNY]
    //lub
    //tab[0][0] = COŒ;
    //tab[0][1] = COŒ;    [1,  2,  4]
    //tab[1][0] = COS;   [-2, 3, 24]
    //tab[1][1] = COŒ;
    //itd itp
    printf("%p\n", tab); //adres chyba 1wszego elementu
    printf("%p\n", &tab[0][0]);
    printf("%p\n", &tab[0][1]);
    printf("%p\n", &tab[0][2]); //INT MA 4 BAJTY WIEC ADRES SIE ZMIENIA O 4, JAK WSKAZNIK SKACZE O 4
    printf("%p\n", &tab[0][3]); // do taba [1][0] mozna sie dostac takze poprzez [0][3] bo tez przeskoczymy o 4 bajty, mimo ze 3ciej kolumny nie ma
    printf("%p\n", &tab[1][0]);
    printf("%p\n", &tab[1][1]);
    printf("%p\n", &tab[1][2]);

    wyswietl(2, 3, tab);

    //TABLICA DYNAMINCZNA - mozna w trakcie zmieniac rozmiar, elastycznosc // tablica tablic // trafia na sterte - mozna wyrzucic
    //takie tablice po zrobieniu zadania mozna zwolnic z pamieci, dzieki czemu wydajnosc wieksza
    //tablica tablic albo wskaznik do wskaznika (podwojny wskaznik)

    int **tab = (int**)malloc(sizeof(int*)*2);  //podwojny wskaznik //rezerwuje pamiec nie na inty jak w tablicach 1wymiarowych, ale rezerwuje pamiec na 2 wskazniki inta //int przechwouje 4 bajty, a int* przechwouje 8 bajtow, 2 bloki zamiast jednego jak int,
                //1wszy wymiar(wiersze) ^       //rezerwujemy wiec pamiec dla 2 wskaznikow do inta czyli ³¹cznie 16 bajtow, i majac te 2 wskazniki czyli adresy, do tych adresów ponizej przypisujemy w tym wypadku 3*inta, czyli pamiec dla 3*4 bajtow, czyli po 3 liczby, wiersz i kolumna
    tab[0]=(int*)malloc(sizeof(int)*3);  //<<<--- 2GI WYMIAR(kolumny)
    tab[1]=(int*)malloc(sizeof(int)*3);  //<<<--- 2GI WYMIAR (kolumny)
    free(tab[0]); //zwalnianie pamieci musi byc w odpowiedniej kolejnosci -- od pierwszego do drugiego wymiaru
    free(tab[1]);
    free(tab);

    //ALBO JAKO WSKAZNIKI ::
//    *tab=(int*)malloc(sizeof(int)*3);
//    *(tab+1)=(int*)malloc(sizeof(int)*3);
//    free(*tab);
//    free(*(tab+1));
//    free(tab);
//


    return 0;
}
