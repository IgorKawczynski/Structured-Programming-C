#include <stdio.h>
#include <stdlib.h>


int potega_m(int n, int m){

    int potega1=1;

    for(int i=1;i<=m;i++){

        potega1=potega1*n;

    }

    return potega1;
}

int pierwiastek_m(int n, int m){

    int pierwiastek1=0;
    for(int i=0; potega_m(i, m)<=n; i++){

        pierwiastek1=i;

    }

    return pierwiastek1;
}

int suma_m(int n, int m){

    int suma=0;

    for(int i=0; pierwiastek_m(i,m)<=n;i++){
        suma=suma+i;


    }

    return suma;
}

int main()
{

    int x,y;
    scanf("%d\n%d", &x, &y);
    printf("%d", suma_m(x, y));


    return 0;
}
