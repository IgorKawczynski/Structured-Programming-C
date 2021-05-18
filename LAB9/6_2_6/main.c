#include <stdio.h>
#include <stdlib.h>
/* W zadaniu 6_2_6 : Nie bardzo wiem jak zwolniæ ca³¹ 3wymiarow¹ tablicê w tej wersji - przy wersji wskaŸnikowej w zadaniu 6_2_5
 zwalniam ka¿dy wymiar po kolei i program dzia³a prawid³owo, ale w tym wypadku, gdy próbujê zrobiæ to samo, program na koniec nie zwraca zera, wiêc domyœlam siê, ¿e coœ robiê Ÿle.
Próbuj¹c jednak zwolniæ tablicê tylko poprzez ,, free(tab) '' - funkcja zwalnia tylko pierwszy wymiar, a reszta pozostaje bez zmian, chyba ¿e coœ Ÿle rozumujê, aczkolwiek wartoœci oprócz pierwszego wiersza pozostaj¹ takie same jak wczeœniej wprowadzone
W zadaniu 6_2_14 : Program nie bardzo chce dzia³aæ i wynika to chyba ze Ÿle zdeklarowanej tablicy, tablice 3wymiarowe deklarowane w ten sposób zdecydowanie s¹ dla mnie mniej zrozumia³e od wskaŸnikowej wersji
 */
int (**foo(unsigned int n, unsigned int m, unsigned int k))[]{

    return malloc(n*sizeof(int[m][k]));

}

void freedom(unsigned int n, unsigned int m, unsigned int k, int tab[n][m][k]){

    free(tab);
}

void elementy(unsigned int n, unsigned int m, unsigned int k, int tab[n][m][k]){

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            for(int l=0; l<k; l++)
            {
                printf("[%d, %d, %d] = ", i, j, l);
                scanf("%d", &tab[i][j][l]);
            }

        }
    }
}
void wyswietl(unsigned int n, unsigned int m, unsigned int k, int tab[n][m][k]){

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            for(int l=0; l<k; l++)
            {
                printf("[%d %d %d] = %d\n", i, j, l, tab[i][j][l]);
            }

        }
    }
}

int main()
{
    int n=2;
    int m=2;
    int k=2;
    int (**tab1)[k]=foo(n, m, k);
    elementy(n, m, k, tab1);
    printf("\nTAB :\n");
    wyswietl(n, m, k, tab1);

    //zwolnienie pamieci
    freedom(n, m, k, tab1);
    wyswietl(n, m, k, tab1);

    return 0;
}
