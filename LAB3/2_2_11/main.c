#include <stdio.h>
#include <stdlib.h>

int pierwiastek(int n){

        int wynik_pierwiastka=0;
    for(int j=0;j*j<=n;j++){
        wynik_pierwiastka=j;

    }
    return wynik_pierwiastka;

}

int suma(int m){

    int wynik_sumy=0;
    for(int i=0;i<=m;i++){
        wynik_sumy=wynik_sumy+pierwiastek(i);

    }
    return wynik_sumy;
}



int main()
{

    unsigned int n;
    scanf("%d", &n);
    printf("suma ciagu: %d", suma(n));
    return 0;
}
