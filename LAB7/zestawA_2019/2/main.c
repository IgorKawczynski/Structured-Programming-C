#include <stdio.h>
#include <stdlib.h>

int pierwiastek_four(unsigned int n){

    int wynik=0;
    for(int i=0; i*i*i*i<=n; i++)
    {
        wynik=i;
    }
    return wynik;

}


int main()
{


    printf("%d\n", pierwiastek_four(2));
    printf("%d\n", pierwiastek_four(16));
    printf("%d\n", pierwiastek_four(29));
    printf("%d\n", pierwiastek_four(81));
    printf("%d\n", pierwiastek_four(99));
    return 0;
}
