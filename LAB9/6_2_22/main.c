#include <stdio.h>
#include <stdlib.h>

/* W zadaniu 6_2_6 : Nie bardzo wiem jak zwolniæ ca³¹ 3wymiarow¹ tablicê w tej wersji - przy wersji wskaŸnikowej w zadaniu 6_2_5
 zwalniam ka¿dy wymiar po kolei i program dzia³a prawid³owo, ale w tym wypadku, gdy próbujê zrobiæ to samo, program na koniec nie zwraca zera, wiêc domyœlam siê, ¿e coœ robiê Ÿle.
Próbuj¹c jednak zwolniæ tablicê tylko poprzez ,, free(tab) '' - funkcja zwalnia tylko pierwszy wymiar, a reszta pozostaje bez zmian, chyba ¿e coœ Ÿle rozumujê, aczkolwiek wartoœci oprócz pierwszego wiersza pozostaj¹ takie same jak wczeœniej wprowadzone
*/

void elementy(int n, int m, int tab[][m]){

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            printf("[%d, %d] =  ", i, j);
            scanf("%d", &tab[i][j]);
            printf("\n");

        }
    }
}

void wyswietl(int n, int m, int tab[][m]){


    for(int i=0; i<n; i++)
    {
        printf("[");
        for(int j=0; j<m; j++)
        {
            printf(" %d ", tab[i][j]);
        }
        printf("]\n");
    }
}

void odwroc(unsigned int n, unsigned int m, int tab[n][m]){

    int temp=0;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m/2; j++)
        {
            temp=tab[i][j];
            tab[i][j]=tab[i][m-j-1];
            tab[i][m-j-1]=temp;
        }
    }


}

int main()
{

    int n=2;
    int m=4;
    int tab1[2][4];
    printf("   TAB1: \n");
    elementy(n, m, tab1);
    printf("   TAB1: \n");
    wyswietl(n, m, tab1);
    odwroc(n, m, tab1);
    printf("  TAB1 po odwroceniu: \n");
    wyswietl(n, m, tab1);



    return 0;
}
