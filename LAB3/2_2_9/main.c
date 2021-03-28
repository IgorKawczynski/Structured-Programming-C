#include <stdio.h>
#include <stdlib.h>

int potega_kwadrat(int r){

    int wynik1=1;
    for(int i=0;i<2;i++){
        wynik1=wynik1*r;

    }
    return wynik1;
}

float potega_m(int e, int z){

    int wynik3=1;
    for(int i=0;i<z;i++){
        wynik3=wynik3*e;
    }


    return wynik3;
}


float pierwiastek_kwadrat(int n){

    int wynik2=0;
    for(int i=0;i*i<=n;i++){

    wynik2=i;

}



    return wynik2;
}

float pierwiastek_m(int n, int m){

    int wynik4=0;
    for(int i=0;potega_m(i,m)<=n;i++){

    wynik4=i;

    }



    return wynik4;
}






int main()
{

    int x;
    int y;
    scanf("%d\n%d", &x, &y);
    printf("%f", pierwiastek_m(x,y));
    return 0;
}
