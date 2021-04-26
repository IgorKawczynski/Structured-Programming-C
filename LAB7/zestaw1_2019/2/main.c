#include <stdio.h>
#include <stdlib.h>

int trzy_n(unsigned int n){

    int wynik=1;
    for(int i=1;i<=n;i++)
    {
        wynik=wynik*3;
    }
    return wynik;

}

float foo1(unsigned int n){

    return 1/(float)trzy_n(n);

}



int main()
{


    printf("%d\n", trzy_n(4));
    printf("%f\n", foo1(4));
    return 0;
}
