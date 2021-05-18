#include <stdio.h>
#include <stdlib.h>

int foo(int tab[80][80][80]){

    int suma=0;
    for(int i=0; i<80; i++)
    {
        for(int j=0; j<80; j++)
        {
            for(int l=0; l<80; l++)
            {
                suma=suma+tab[i][j][l];
            }
        }
    }
    return suma;
}


int main()
{
    //Program nie chce dzia³aæ przy tak du¿ym rozmiarze funkcji, dla rozmiaru mniejszego, przyk³adowo [80][80][80] program dzia³a jednak prawid³owo
    //Próbowa³em zmieniæ typ danych, ale dalej tablica jest jakby ,,zbyt du¿a''
    int tab1[80][80][80];
    for(int i=0; i<80; i++)
    {
        for(int j=0; j<80; j++)
        {
            for(int l=0; l<80; l++)
            {
                tab1[i][j][l]=1;
            }
        }
    }
    printf("%d\n", foo(tab1));
    return 0;
}
