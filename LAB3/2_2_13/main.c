#include <stdio.h>
#include <stdlib.h>

int potega_kwadrat(unsigned int n){

    if(n==0)
        return 0;
    int wynik=1;
    for(int i=0;i<2;i++)
    {
        wynik=wynik*n;
    }
    return wynik;


}

int rozklady(unsigned int n){

    int pocz=0;
    int koniec=n;
    int srodek;
    while(koniec-pocz>1)
    {
        srodek=(pocz+koniec)/2;
        if(srodek*srodek<=n)
            pocz=srodek;
        else
            koniec=srodek;
    }
    if(n<=1)
        return koniec;
    else
        return pocz;
}

void wypisz_a(unsigned int n){

    int i;
    int p;
    for(i=1; i<=rozklady(n); i++)
    {
        p=rozklady(n-i*i);
        if((p!=0)&&(i*i+p*p==n))
            printf("%d * %d + %d * %d = %d | ", i, i, p, p, n);
    }
}

void wypisz_b(unsigned int n){ // GDY a^2 + b^2 i b^2 + a^2  traktujemy jako to samo

    int i;
    int p;
    for(i=1; i<=rozklady(n); i++)
    {
        p=rozklady(n-i*i);
        if((i*i+p*p==n)&&(i<p))
            printf("%d * %d + %d * %d = %d | ", i, i, p, p, n);
    }
}

//void rozklad_latwy_ale_tylko1przyklad(int n){
//    for (int i = 0; i<=n; i++){
//        for (int p = i; p<=n; p++){
//            int s = i*i + p*p;
//            if (s==n){
//                printf("%d  oraz  %d\n", i, p);
//            }
//        }
//    }
//}

int main()
{

    rozklady(34);
    printf("\n");
    wypisz_a(34);
    printf("\n");
    wypisz_b(34);
    printf("\n");
    return 0;
}
